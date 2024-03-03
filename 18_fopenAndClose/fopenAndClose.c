#include <stdio.h>
//3.3
void main() {

	FILE* fp = NULL;
	fopen_s(&fp, "Test.txt", "r+");
	if (fp == NULL) {
		puts("ERROR: Failed to open file!");
		return;
	}

	//TODO: File I/O
	//fprintf(fp, "%s\n", "Hello");
	fprintf(fp, "%s\n", "World");
	fclose(fp);
	return;
}

