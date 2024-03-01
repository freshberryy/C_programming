#include <stdio.h>
//3.1
int TestFunc(void) {
	int x = 5;
	static int nData = 10;
	++nData;
	return nData;
}

int main(int argc, char* argv[]) {
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	printf("%d\n", TestFunc());
	return 0;
}
//메모리 디버깅: 중단점과 중단점 사이 반복 가능
//x 주소에 쓰레기값 확인-5행 실행 전임에도 nData 주소에 값이 있음을 확인-x와 nData 값 증가 확인
//함수 호출 후에 x의 값이 소멸함을 확인, nData는 그대로임을 확인
//다시 5행으로 올라가서, x의 같은 메모리 주소에 5가 저장됨을 확인, nData 값은 변경 없음을 확인
