#include<stdio.h>

void main() {

	int aList[5] = { 30, 40, 10, 50, 20 };

	int len = sizeof(aList) / sizeof(aList[0]);

	for (int i = 0; i < len - 1; i++) {

		for (int j = 0; j < len - i - 1; j++) {

			if (aList[j] > aList[j + 1]) {

				int tmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = tmp;
			}
		}

		for (int h = 0; h < 5; h++) {
			printf("%d\t", aList[h]);
		}
		putchar('\n');
	}
}