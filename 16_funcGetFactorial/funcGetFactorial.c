#include<stdio.h>

int getFac(int n) {
	if (n == 1) return 1;
	int res = 1;
	for (int i = n; i > 0; i--) {
		res *= i;
	}
	return res;
}

int main() {
	printf("5! == %d\n", getFac(5));
	return 0;
}