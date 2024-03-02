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

//메모리 디버깅: 
//6행에 중단점-szBuffer 초기화 확인-step over로 11행까지 실행-&pszToken과 szBuffer의 값 비교
//szBuffer의 구분자 자리에 NULL을 넣는지 확인