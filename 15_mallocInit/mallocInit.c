#include <stdio.h>
#include <stdlib.h>
//2.29
int main(void) {
	char szBuffer[] = { "Hello" };
	char* pszBuffer = "Hello";
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);
	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0';

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);

	free(pszData);
	return 0;
}

//�޸� �����:
//szBuffer�� Hello�� ����Ǿ����� Ȯ��-pszBuffer�� �ּ� ����ƴ��� Ȯ��-pszData�� �ʱ�ȭ�ƴ��� Ȯ��
//pszData�� ���� �Ҵ�� �ּҰ� ����Ǿ����� Ȯ��-pszData�� ���� ����Ǵ��� Ȯ��
//free �� pszData�ּ��� ������ ��ȯ�Ǿ����� Ȯ��