#include<stdio.h>
#include<stdlib.h>

int main() {

	char szBuffer[12] = {"HelloWorld"};
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	for (int i = 0; i < 12; i++) {
		pszData[i] = szBuffer[i];
	}
	puts(pszData);
	free(pszData);
	return 0;
}