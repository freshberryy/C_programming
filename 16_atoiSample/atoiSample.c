#include <stdio.h>
#include <stdlib.h>
//3.2
int main() {

	char szBuffer[32];
	int res = 0;

	printf("Input string: ");
	gets_s(szBuffer, sizeof(szBuffer));

	res = atoi(szBuffer);
	printf("%d\n", res);
	return 0;
}