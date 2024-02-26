#include<stdio.h>

void main() {
	int a[5][5] = { 0 };
	int cnt = 0;
	int flag = 1;
	for (int i =0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			if (flag) {
				a[i][j] = ++cnt;

			}
				
			else {
				a[i][4 - j] = ++cnt;

			}
				
		}
		flag = !flag;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", a[i][j]);
		}
		putchar('\n');
	}
}