#include <stdio.h>
#include <stdlib.h>

int getAge() {
	int nAge;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);
	return nAge;
}

int getFee(int nAge) {
	int nFee = 1000;
	if (nAge < 20) nFee /= 2;
	return nFee;
}

int printMenu() {
	int nInput = 0;
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n");
	scanf_s("%d", &nInput);
	return nInput;
}

int main() {

	int nMenu = 0, nAge = 0;

	while ((nMenu = printMenu()) != 0) {
		if (nMenu == 1) {
			nAge = getAge();
			printf("요금은 %d원 입니다.\n", getFee(nAge));
		}
	}
	printf("Bye~!");
	return 0;
}