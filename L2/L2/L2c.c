#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	FILE *f;
	if (!system(NULL)) 
		exit(EXIT_FAILURE);
	f = fopen("filename.in", "w");

	
	fprintf(f, "\"%s\"", argv[1]);
	fclose(f);
	system("racket L2.rkt");
	
	


	return 0;
}
