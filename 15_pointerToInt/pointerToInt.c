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
//�޸� �����:
//�����Ϳ� ����� ���� �ּҶ�� ���� �����ϸ�, ������ ���� 1 ������ ������ ������ ���� ���� ������ �ڷ����� ����Ʈ ũ�⸸ŭ �����ϴ� ���� ����
