#include<stdio.h>

int getMax(int a, int b, int c) {
	
	int arr[3] = { a, b, c };
	int max = arr[0];
	for (int i = 0; i < 3; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;

}

int main() {
	printf("세 개의 정수를 입력하세요: ");
	int x, y, z;
	
	if (scanf_s("%d%d%d", &x, &y, &z) != 3) {
		printf("입력한 \'정수\'가 세 개가 아닙니다.");
		return;
	}
	int result = getMax(x, y, z);
	printf("최댓값은 %d입니다.", result);
	return 0;
}