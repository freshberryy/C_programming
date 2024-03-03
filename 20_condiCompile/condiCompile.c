#include <stdio.h>
//3.3
#define MSGTEST

#ifdef MSGTEST
#define MYMESSAGE "I am a boy."
#else
#define MYMESSAGE "You are a girl."
#endif

int main(void)
{
	puts(MYMESSAGE);
	return 0;
}