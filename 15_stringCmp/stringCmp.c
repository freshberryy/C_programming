#include <stdio.h>
#include<string.h>	
//2.29
int main() {

	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test		", "TestString"));

	return 0;
}