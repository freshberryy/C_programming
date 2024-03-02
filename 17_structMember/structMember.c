#include <stdio.h>

typedef struct myBody {
	int h;
	int w;
}myBody;

typedef struct USERDATA {
	char name[32];
	char phone[32];
	myBody body;
}USERDATA;

void main() {

	USERDATA user = {
		"Yun",
		"5738",
		{173, 80}

	};
	printf("%s\t%s\t%d\t%d\n", user.name, user.phone, user.body.h, user.body.w);

}