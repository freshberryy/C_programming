#include <stdio.h>
//3.3
void main() {

	FILE* fp = NULL;
	char ch;
	fopen_s(&fp, "Test.txt", "w");
	fputs("Test string!", fp);
	fclose(fp);

	fopen_s(&fp, "Test.txt", "r");
	if (fp == NULL)
		return;

	while ((ch = fgetc(fp)) != EOF)
		putchar(ch);

	fclose(fp);
	return 0;
}