#include <stdlib.h>
#include <stdio.h>
#include "lib/file.h"
#include "lib/lexer.h"

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Usage:\n\t%s file.md\n", argv[0]);
		return 1;
	}

	char *buffer;

	read_file(argv[1], &buffer);

	char *code = lexer(buffer);

	printf("%s", code);

	free(buffer);
	return 0;
}
