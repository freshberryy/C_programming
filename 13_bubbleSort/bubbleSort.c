#include<stdio.h>

void main() {
	int arr[] = { 30, 40, 10, 50, 20 };

	
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		for (int i = 0; i < 5; i++) {
			printf("%d\t", arr[i]);
		}
		putchar('\n');
	}
	
	
}