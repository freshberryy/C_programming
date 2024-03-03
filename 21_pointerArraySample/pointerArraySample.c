#include <stdio.h>

double mul(int a, float b) {
	return a * b;
}

double add(int a, float b) {
	return a + b;
}

void main() {
	double (*fArray[])(int, float) = { mul, add };

	int x = 5;
	float y = 7.98;

	double res = fArray[0](x, y);
	printf("Result: %.2lf\n", res);
}