#include <stdio.h>
#include <string.h>
//2.28
int main() {
	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;
	int nLength = 0;

	while (*pszData != '\0') {
		pszData++;
		nLength++;
	}

	printf("Length : %d\n", nLength);
	printf("Length : %ld\n", strlen(szBuffer));
	printf("Length : %ld\n", strlen("World"));

	return 0;
}
//�޸� �����: 
//5�࿡ �ߴ���-pszData�� ����� �ּҿ� szBuffer �ּ� ��
//while������ pszData�� �ּҰ� ������ nLength�� ���� ����