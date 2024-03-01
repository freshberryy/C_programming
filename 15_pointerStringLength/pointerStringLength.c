#include <stdio.h>
//2.27
int main() {

	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	while (*pszData != '\0')
		pszData++;

	printf("&pszData : %p, &szBuffer : %p\n", pszData, szBuffer);
	printf("Length : %ld\n", pszData - szBuffer);
	return 0;
}

//메모리 디버깅