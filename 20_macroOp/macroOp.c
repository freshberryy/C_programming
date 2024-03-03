#include <stdio.h>
//3.3
#define STRING(a) #a
#define PASTER(a, b) a##b

int main() {

	int data = 10;
	printf("%d\n", PASTER(da, ta));
	printf("%d\n", data);
	printf("%s\n", STRING(data));

	return 0;
}