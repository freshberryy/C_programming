#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//2.29
int main() {

	char szBuffer[] = "Hello";
	char* pszBuffer = szBuffer;

	char* pszHeap = (char*)malloc(sizeof(char) * 16);
	strcpy_s(pszHeap, sizeof(char) * 16, pszBuffer);

	puts(pszHeap);
	free(pszHeap);
	return 0;
}