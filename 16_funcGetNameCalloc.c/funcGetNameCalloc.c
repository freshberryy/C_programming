#include <stdio.h>
#include<stdlib.h>
//3.1
char* getName() {

	char* pszName = NULL;
	pszName = (char*)calloc(32, sizeof(char));
	fgets(pszName, sizeof(char) * 32, stdin);
	return pszName;  //����
	
}

int main(int argc, char* argv[]) {

	printf("�̸��� �Է��ϼ��� : ");

	char* pszName = NULL;

	pszName = getName();
	
	printf("����� �̸��� %s�Դϴ�.\n", pszName);
	free(pszName);
	return 0;
}