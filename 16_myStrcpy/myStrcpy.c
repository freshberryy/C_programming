#include<stdio.h>
#include<string.h>
//3.1
void MyStrCpy(char* dst, unsigned int size, char* src) { //�ּ� �޴� �Ű��������� unsigned�� ����

	size_t len = 0;   //�迭, ���ڿ� ���� ���� ���� �� size_t��
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