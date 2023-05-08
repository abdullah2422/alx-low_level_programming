#include <stdio.h>
#include "main.h"
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *FileOut;
	if(*filename == '\0')
	{
		printf("Error in the name of file!\n");
		exit(1);
	}
	if((FileOut = fopen(filename, "a"))==NULL){
		printf("Can't create file!\n");
		exit(1);
	}else{
		fprintf(FileOut, "%s", letters);
	}
	fclose(FileOut);
}
