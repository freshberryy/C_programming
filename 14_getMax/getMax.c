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
	printf("�� ���� ������ �Է��ϼ���: ");
	int x, y, z;
	
	if (scanf_s("%d%d%d", &x, &y, &z) != 3) {
		printf("�Է��� \'����\'�� �� ���� �ƴմϴ�.");
		return;
	}
	int result = getMax(x, y, z);
	printf("�ִ��� %d�Դϴ�.", result);
	return 0;
}