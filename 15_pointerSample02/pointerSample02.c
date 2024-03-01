#include <stdio.h>
//2.27
int main(void)
{
	int nData = 10;
	int* pnData = &nData;

	return 0;
}

//메모리 디버깅: 
//5행에 중단점-메모리 창에 &nData 입력-f10-주소에 저장된 값 확인
//f10-메모리 창에 &pnData 입력-&pnData에 저장된 값이 &nData의 주소와 일치하는지 확인