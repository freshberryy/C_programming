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
//메모리 디버깅: 
//5행에 중단점-pszData에 저장된 주소와 szBuffer 주소 비교
//while문에서 pszData의 주소값 증가와 nLength값 증가 추적