#include <stdlib.h>
#include <string.h>

char* lexer(char *buffer) {
	char *content = malloc(strlen(buffer) * sizeof(char));
	strcpy(content, buffer);


	return content;
}
