#include <stdio.h>
#include <string.h>
//3.2
int main() {

	char szBuffer[128] = { "nData = x + y;\nnResult = a * b" };
	char* pszSep = " *+=;\n";
	char* pszToken = NULL;
	char* pszNextToken = NULL;

	pszToken = strtok_s(szBuffer, pszSep, &pszNextToken);
	while (pszToken != NULL) {
		puts(pszToken);
		pszToken = strtok_s(NULL, pszSep, &pszNextToken);
	}
	printf("\nszBuffer: %s\n", szBuffer);
}

//�޸� �����: 
//6�࿡ �ߴ���-szBuffer �ʱ�ȭ Ȯ��-step over�� 11����� ����-&pszToken�� szBuffer�� �� ��
//szBuffer�� ������ �ڸ��� NULL�� �ִ��� Ȯ��