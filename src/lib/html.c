#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *HTML = 
	"<html>"
		"<body>"
			"%s"
		"</body>"
	"</html>";

char* create_html_page(char *markdown) {
	char *page = malloc(strlen(HTML) * sizeof(char) + strlen(markdown) * sizeof(char));
	strcpy(HTML, page);
	sprintf(page, ); 

	return page;
}
