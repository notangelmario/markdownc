#include <stdlib.h>
#include <stdio.h>
#include <mkdio.h>
#include "gfm.h"

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("Usage: %s TARGET OUTPUT\n", argv[0]);
		return 1;
	}

	FILE *fpin = fopen(argv[1], "r");
	FILE *fpout = fopen(argv[2], "w");

	if (fpin == NULL) {
		fprintf(stderr, "Error getting input file!\n"); 
		return 1;
	}

	if (fpout == NULL) {
		fprintf(stderr, "Error getting output file\n");
		return 1;
	}

	fprintf(fpout, "<html><head><style>%s</style></head><body>", GFM_CSS);

	MMIOT *doc = mkd_in(fpin, 0);	

	markdown(doc, fpout, 0);

	fprintf(fpout, "</body></html>");


	fclose(fpin);
	fclose(fpout);

	mkd_cleanup(doc);

	return 0;
}
