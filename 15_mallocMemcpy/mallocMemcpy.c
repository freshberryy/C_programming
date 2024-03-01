#include <stdio.h>
#include<string.h>
//2.29
int main() {

	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}