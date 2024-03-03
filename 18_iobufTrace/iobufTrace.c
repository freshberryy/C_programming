#include <stdio.h>
//3.3
typedef struct IOBUF_TEST
{
	char* pCur;
	char* pBase;
	int		bufSize;
} IOBUF_TEST;

void print_iobuf(IOBUF_TEST* pBuf)
{
	printf("Base: %p\n", pBuf->pBase);
	printf("Current: %p\n", pBuf->pCur);
	printf("Buffer size: %d\n", pBuf->bufSize);
	printf("Written size: %zd\n\n", pBuf->pCur - pBuf->pBase);
}

int main(void)
{
	FILE* fp = NULL;
	fopen_s(&fp, "CON", "w");

	IOBUF_TEST* pIoBuff = (IOBUF_TEST*)fp;

	print_iobuf((IOBUF_TEST*)fp);

	fputs("Hello", fp);
	print_iobuf((IOBUF_TEST*)fp);
	fputs("World", fp);
	print_iobuf((IOBUF_TEST*)fp);

	fclose(fp);
	return 0;
}
//메모리 디버깅: 버퍼 추적
/*28행 중단점->pIoBuff 추적->채워지고 남은 버퍼가 4086비트인지 확인-pCur가 증가하는지 확인*/