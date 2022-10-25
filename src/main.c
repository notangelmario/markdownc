#include <stdlib.h>
#include <stdio.h>
#include "lib/file.h"
#include "lib/lexer.h"
#include "lib/html.h"

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Usage: %s TARGET -o OUTPUT\n\n  -o=OUTPUT\tFile to output\n", argv[0]);
		return 1;
	}

	char *buffer;

	read_file(argv[1], &buffer);

	char *markdown = lexer(buffer);
	char *html = create_html_page(markdown);

	free(buffer);
	return 0;
}
