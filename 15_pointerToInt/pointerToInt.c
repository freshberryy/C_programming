#include <stdio.h>
//2.29
int main() {

    char ch = 'A';
    int i = 1;
    double d = 3.14;


    char* pChar = &ch;
    int* pInt = &i;
    double* pDouble = &d;


    for (int count = 0; count < 5; count++) {
        pChar++;
        pInt++;
        pDouble++;
    }

    return 0;
}
//메모리 디버깅:
//포인터에 저장된 것은 주소라는 것을 유의하며, 포인터 값이 1 증가할 때마다 포인터 안의 값이 포인터 자료형의 바이트 크기만큼 증가하는 것을 추적
