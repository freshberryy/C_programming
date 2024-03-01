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

//메모리 디버깅:
//szBuffer에 Hello가 저장되었는지 확인-pszBuffer에 주소 저장됐는지 확인-pszData가 초기화됐는지 확인
//pszData에 동적 할당된 주소가 저장되었는지 확인-pszData에 문자 저장되는지 확인
//free 후 pszData주소의 공간이 반환되었는지 확인