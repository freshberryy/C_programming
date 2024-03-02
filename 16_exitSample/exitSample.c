#include <stdio.h>
#include <stdlib.h>
//3.2
void main() {

	char ch;
	printf("Do you wand to EXIT? (Y/N)\n");
	ch = getchar();

	if (ch == 'y' || ch == 'Y') {
		puts("EXIT");
		exit(1);
	}
	puts("End of main( )");
}