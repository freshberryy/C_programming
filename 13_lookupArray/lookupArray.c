#include<stdio.h>

void main() {
	
	double aRate[10] = {
		0.0, 0.1, 0.25,
		0.5, 0.5,
		0.6, 0.65,
		0.8, 0.82, 0.97
	};

	int nAge = 0, nFee = 1000;

	printf("���ǥ\n");
	for (int i = 1; i <= 10; i++)
		printf("%d�� ���: \t%d��\n", i, (int)(nFee * aRate[i - 1]));
	putchar('\n');
}