#include <stdio.h>
//3.1
int main() {

	char astrList[2][12] = { "Hello", "World" };
	char(*pstrList)[12] = astrList;

	puts(pstrList[0]);
	puts(pstrList[1]);
	return 0;
}