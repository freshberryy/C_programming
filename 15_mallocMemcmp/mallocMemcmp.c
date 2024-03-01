#include <stdio.h>
#include<string.h>
//2.29
int main() {

	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	printf("%d\n", memcmp(szBuffer, pszData, 10));
	printf("%d\n", memcmp("testString", pszData, 10));
	printf("%d\n", memcmp("DataString", pszData, 10));
}