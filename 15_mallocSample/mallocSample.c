#include <stdio.h>
#include <stdlib.h>
//2.28
int main(void)
{
	int* pList = NULL;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (int i = 0; i < 3; ++i)
		printf("%d\n", pList[i]);

	free(pList);
	return 0;
}
//�޸� �����:
//6�� �ߴ���-pList �ʱ�ȭ Ȯ��-pList�� malloc ��ȯ�� ����Ǿ����� Ȯ��
//�޸� â 2�� pList �־ �Ҵ�� �޸� ���� Ȯ��-10~12�� �����ؼ� �� ����Ǵ��� Ȯ��
//17�� �����ؼ� �޸� ��ȯ Ȯ��
