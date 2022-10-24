#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int get_file(char *filename, char **buffer) {
	unsigned long numbytes;
	FILE *fp = fopen(filename, "r");
	
	fseek(fp, 0L, SEEK_END);
	numbytes = ftell(fp);

	*buffer = calloc(numbytes, sizeof(char));
	
	fseek(fp, 0L, SEEK_SET);

	if (buffer == NULL) {
		printf("Error allocating memory!");
		return 1;
	}

	fread(*buffer, sizeof(char), numbytes, fp);
	fclose(fp);

	return 0;
}