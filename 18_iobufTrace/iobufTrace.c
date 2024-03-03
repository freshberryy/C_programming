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
//�޸� �����: ���� ����
/*28�� �ߴ���->pIoBuff ����->ä������ ���� ���۰� 4086��Ʈ���� Ȯ��-pCur�� �����ϴ��� Ȯ��*/