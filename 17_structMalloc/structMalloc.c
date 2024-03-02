#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//3.2
typedef struct userData {
	int age;
	char name[32];
	char phone[32];
}userData;

void main() {

	userData* pUser = (userData*)malloc(sizeof(userData));

	pUser->age = 26;
	strcpy_s(pUser->name, sizeof(pUser->name), "Yun");
	strcpy_s(pUser->phone, sizeof(pUser->phone), "5738");

	printf("%d»ì\t%s\t%s\n", pUser->age, pUser->name, pUser->phone);

	free(pUser);
}