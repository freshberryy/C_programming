#include <stdio.h>
#include <string.h>
//3.3
typedef struct USERDATA {

	char name[32];
	char phone[32];
}USERDATA;

void main() {
	FILE* fp = NULL;
	USERDATA userdata = { "Hui-young", "123-1345" };
	fopen_s(&fp, "Me.dat", "wb");
	if (fp == NULL)
		return;

	fwrite(&userdata, sizeof(USERDATA), 1, fp);
	fclose(fp);

	memset(&userdata, 0, sizeof(userdata));
	fp = NULL;
	fopen_s(&fp, "Me.dat", "rb");
	if (fp == NULL)
		return;
	fread(&userdata, sizeof(userdata), 1, fp);
	puts(userdata.name);
	puts(userdata.phone);
	fclose(fp);
	return 0;

	
}