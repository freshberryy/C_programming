#include <stdio.h>
//2.27
int main(void)
{
	int nData = 10;
	printf("%s\n", "nData");

	printf("%d\n", nData);
	printf("%p\n", &nData);
	return 0;
}

//�޸� �����: 
//5�࿡ �ߴ���-f10-�޸� â�� &nData�Է�-�Ҵ�� 16���� �� Ȯ��
//6�� �ߴ���-alt+8���� �𽺾����-���ڿ� nData �ּҸ� �޸� â�� �Է�- nData ����Ǿ����� Ȯ��
//���Ϲ� ������ f10���� ����-��µ� �ּҰ� �޸� â�� &nData�� ��ġ�ϴ��� Ȯ��
