#include <stdio.h>
//3.1
int TestFunc(void) {
	int x = 5;
	static int nData = 10;
	++nData;
	return nData;
}

int main(int argc, char* argv[]) {
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	return 0;
}
//�޸� �����: �ߴ����� �ߴ��� ���� �ݺ� ����
//x �ּҿ� �����Ⱚ Ȯ��-5�� ���� ���ӿ��� nData �ּҿ� ���� ������ Ȯ��-x�� nData �� ���� Ȯ��
//�Լ� ȣ�� �Ŀ� x�� ���� �Ҹ����� Ȯ��, nData�� �״������ Ȯ��
//�ٽ� 5������ �ö󰡼�, x�� ���� �޸� �ּҿ� 5�� ������� Ȯ��, nData ���� ���� ������ Ȯ��
