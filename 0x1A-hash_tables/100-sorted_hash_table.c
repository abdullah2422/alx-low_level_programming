#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct shash_node_s {
  char *key;
  char *value;
  struct shash_node_s *next;
  struct shash_node_s *sprev;
  struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s {
  unsigned long int size;
  shash_node_t **array;
  shash_node_t *shead;
  shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size) {
  shash_table_t *ht = malloc(sizeof(shash_table_t));
  if (!ht) {
    return NULL;
  }

  ht->size = size;
  ht->array = malloc(sizeof(shash_node_t *) * size);
  if (!ht->array) {
    free(ht);
    return NULL;
  }

  for (unsigned long int i = 0; i < size; i++) {
    ht->array[i] = NULL;
  }

  ht->shead = NULL;
  ht->stail = NULL;

  return ht;
}

unsigned long int hash_djb2(const unsigned char *str) {
  unsigned long int hash = 5381;
  int c;

  while ((c = *str++)) {
    hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
  }

  return hash % 1024;
}

unsigned long int key_index(const unsigned char *key, unsigned long int size) {
  return hash_djb2(key) % size;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
  unsigned long int index = key_index((unsigned char *)key, ht->size);

  shash_node_t *node = malloc(sizeof(shash_node_t));
  if (!node) {
    return -1;
  }

  node->key = strdup(key);
  node->value = strdup(value);
  node->next = NULL;
  node->sprev = NULL;
  node->snext = NULL;

  if (!ht->array[index]) {
    ht->array[index] = node;
    node->sprev = ht->stail;
    if (ht->stail) {
      ht->stail->snext = node;
    } else {
      ht->shead = node;
    }
    ht->stail = node;
    return 0;
  }

  shash_node_t *prev = NULL;
  shash_node_t *curr = ht->array[index];

  while (curr) {
    if (strcmp(key, curr->key) < 0) {
      break;
    }

    prev = curr;
    curr = curr->next;
  }

  node->next = curr;
  if (prev) {
    prev->next = node;
  } else {
    ht->array[index] = node;
  }

  node->sprev = prev;
  if (curr) {
    curr->sprev = node;
  } else {
    ht->stail = node;
  }

  return 0;
}

char *shash_table_get(const shash_table_t *ht, const char *key) {
  unsigned long int index = key_index((unsigned char *)key, ht->size);

  shash_node_t *node = ht->array[index];

  while (node) {
    if (strcmp(key,

