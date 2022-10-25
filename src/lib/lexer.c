#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* lexer(char *buffer) {
	char *content = malloc(strlen(buffer) * sizeof(char));
	strcpy(content, buffer);
	
	char *ptr = strtok(content, "\n");

	while (ptr != NULL) {
		printf("%s\n", ptr);		
		ptr = strtok(NULL, "\n");
	}

	return content;
}
