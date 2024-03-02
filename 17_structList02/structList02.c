#include<stdio.h>
//3.2
typedef struct USERDATA {

	char name[32];
	char phone[32];

	struct USERDATA* next;
}USERDATA;

USERDATA userList[4] = {
	{"��ν�", "1234", NULL},
	{"�̹���", "2345", NULL},
	{"�����", "3456", NULL},
	{"�����", "4567", NULL}
};

void printList(USERDATA* p) {

	if (p == NULL) return;
	printf("[%p] %s, %s, next:%p\n",p, p->name, p->phone, p->next);
	printList(p->next);
	return;
}

void main() {

	userList[0].next = &userList[1];
	userList[1].next = &userList[2];
	userList[2].next = &userList[3];
	userList[3].next = NULL;

	printList(&userList[0]);
}