#include<stdio.h>

void main() {
	printf("나이를 입력하세요: ");
	int age;
	scanf_s("%d%*c", &age);

	printf("이름을 입력하세요: ");
	char name[20] = { 0 };
	gets_s(name, sizeof(name));
	
	printf("당신의 나이는 %d살이고 이름은 \'%s\'입니다.", age, name);
}