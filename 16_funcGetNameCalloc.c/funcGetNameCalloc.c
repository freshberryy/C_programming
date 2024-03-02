#include <stdio.h>
#include<stdlib.h>
//3.1
char* getName() {

	char* pszName = NULL;
	pszName = (char*)calloc(32, sizeof(char));
	fgets(pszName, sizeof(char) * 32, stdin);
	return pszName;  //위험
	
}

int main(int argc, char* argv[]) {

	printf("이름을 입력하세요 : ");

	char* pszName = NULL;

	pszName = getName();
	
	printf("당신의 이름은 %s입니다.\n", pszName);
	free(pszName);
	return 0;
}