#include<stdio.h>
#include<string.h>
//3.1
void MyStrCpy(char* dst, unsigned int size, char* src) { //주소 받는 매개변수에는 unsigned가 안전

	size_t len = 0;   //배열, 문자열 길이 변수 선언 시 size_t로
	len = strlen(src);
	
	for (int i = 0; i < len; i++) {
		dst[i] = src[i];
	}
}

int main(int argc, char* argv[]) {
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrCpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	return 0;
}