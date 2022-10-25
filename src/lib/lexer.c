#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void slice_str(const char * str, char * buffer, size_t start, size_t end) {
    size_t j = 0;
    for ( size_t i = start; i <= end; ++i ) {
        buffer[j++] = str[i];
    }
    buffer[j] = 0;
}

char* lexer(char *buffer) {
	char *content = malloc(strlen(buffer) * sizeof(char));
	strcpy(content, buffer);
	
	char *ptr = strtok(content, "\n");

	while (ptr != NULL) {
		switch (ptr[0]) {
			case '#': {
				char new_string[128];
				slice_str(ptr, new_string, 2, strlen(ptr));
				printf("<h1>%s</h1>\n", new_string);
				break;
			}
		}

		ptr = strtok(NULL, "\n");
	}

	return content;
}
