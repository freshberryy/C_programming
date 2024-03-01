#include <stdio.h>
#include <stdlib.h>
//2.28
int main(void)
{
	int* pList = NULL;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	for (int i = 0; i < 3; ++i)
		printf("%d\n", pList[i]);

	free(pList);
	return 0;
}
//메모리 디버깅:
//6행 중단점-pList 초기화 확인-pList에 malloc 반환값 저장되었는지 확인
//메모리 창 2에 pList 넣어서 할당된 메모리 공간 확인-10~12행 실행해서 값 저장되는지 확인
//17행 실행해서 메모리 반환 확인
