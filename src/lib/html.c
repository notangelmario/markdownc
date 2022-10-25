#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HTML "<html><body>%s</body></html>"


char* create_html_page(char *markdown) {
	char *page = malloc(strlen(HTML) * sizeof(char) + strlen(markdown) * sizeof(char));
	sprintf(page, "<html><body>%s</body></html>", markdown); 

	return page;
}
