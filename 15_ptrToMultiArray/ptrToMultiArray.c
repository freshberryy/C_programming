#include <stdio.h>
//3.1
int main() {

	char astrlist[2][12] = { "hello", "world" };
	char(*pstrlist)[12] = astrlist;

	puts(pstrlist[0]);
	puts(pstrlist[1]);
	return 0;
}


