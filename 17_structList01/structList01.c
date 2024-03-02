#include<stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];

	struct USERDATA* next;
}USERDATA;

void main() {

	USERDATA user = { "김두식", "1234", NULL };
	USERDATA newUser = { "이미현", "2345", NULL };

	user.next = &newUser;
	printf("%s, %s\n", user.name, user.phone);
	printf("%s, %s\n", user.next->name, user.next->phone);
}