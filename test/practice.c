#include<stdio.h>

void main() {
	printf("���̸� �Է��ϼ���: ");
	int age;
	scanf_s("%d%*c", &age);

	printf("�̸��� �Է��ϼ���: ");
	char name[20] = { 0 };
	gets_s(name, sizeof(name));
	
	printf("����� ���̴� %d���̰� �̸��� \'%s\'�Դϴ�.", age, name);
}