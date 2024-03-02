#include <stdio.h>
#include <String.h>
//3.2
int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };

	strcat_s(szPath, sizeof(szPath), "CHS\\");
	strcat_s(szPath, sizeof(szPath), "C programming");
	puts(szPath);

	return 0;
}

//메모리 디버깅: 
//6행 중단점-szPath에 문자열 저장 확인-문자열 붙는지 확인
//15행 실행-18번째 주소부터 문자열 복사 추적