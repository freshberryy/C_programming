#include <stdio.h>
//3.2
void putData(char* string) {

	if (*string == '\0')
		return;

	putData(string + 1);
	putchar(*string);
	
}

int main() {

	putData("TestData");
	putchar('\n');
	return 0;
}
//�޸� �����:
//15�࿡ �ߴ���-step into�� putData�Լ� ����-string�� �޸� â�� �Է��Ͽ� TestData �ּ� ���忩�� Ȯ��-����Լ� ȣ�� �� string ���� �ּҰ� 1�� �����ϴ��� ����
//ȣ�� ���� Ȯ��