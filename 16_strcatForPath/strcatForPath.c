#include <stdio.h>
#include <String.h>
//3.2
int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };

	strcat_s(szPath, sizeof(szPath), "CHS\\");
	strcat_s(szPath, sizeof(szPath), "C programming");
	puts(szPath);

	return 0;
}

//�޸� �����: 
//6�� �ߴ���-szPath�� ���ڿ� ���� Ȯ��-���ڿ� �ٴ��� Ȯ��
//15�� ����-18��° �ּҺ��� ���ڿ� ���� ����