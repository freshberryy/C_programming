#include <stdio.h>
//3.2
void putData(char* string) {

	if (*string == '\0')
		return;

	putData(string + 1);
	putchar(*string);
	
}

int main() {

	putData("TestData");
	putchar('\n');
	return 0;
}
//메모리 디버깅:
//15행에 중단점-step into로 putData함수 진입-string을 메모리 창에 입력하여 TestData 주소 저장여부 확인-재귀함수 호출 시 string 안의 주소가 1씩 증가하는지 추적
//호출 스택 확인