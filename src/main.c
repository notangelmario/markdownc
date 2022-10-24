#include <stdio.h>
#include "lib/file.h"


int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Usage:\n\t%s file.md\n", argv[0]);
		return 1;
	}

	char *buffer;

	get_file(argv[1], &buffer);

	printf("%s", buffer);

	return 0;
}
