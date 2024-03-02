#include <stdio.h>
#include <stdlib.h>
//3.2
void main() {

	char cmd[512] = { 0 };
	printf("INPUT COMMAND: ");
	gets_s(cmd, sizeof(cmd));

	system(cmd);
	// system("notepad.exe");
}