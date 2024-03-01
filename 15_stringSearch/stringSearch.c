#include <stdio.h>
#include<string.h>
//3.1
int main() {

	char szBuffer[32] = "I am a boy.";

	printf("%p\n", szBuffer);

	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));

	printf("Index: %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index: %d\n", strstr(szBuffer, "boy") - szBuffer);


	return 0;
}