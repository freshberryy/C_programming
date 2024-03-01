#include <stdio.h>
//2.27
int main(void)
{
	int nData = 10;
	printf("%s\n", "nData");

	printf("%d\n", nData);
	printf("%p\n", &nData);
	return 0;
}

//메모리 디버깅: 
//5행에 중단점-f10-메모리 창에 &nData입력-할당된 16진수 값 확인
//6행 중단점-alt+8으로 디스어셈블-문자열 nData 주소를 메모리 창에 입력- nData 저장되었는지 확인
//리턴문 전까지 f10으로 실행-출력된 주소가 메모리 창의 &nData와 일치하는지 확인
