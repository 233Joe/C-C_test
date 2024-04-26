#include<stdio.h>
#include <string.h>
int main(){
	char user[] = "admin admin";
	char user1[20] = "0";

	gets(user1);
	switch (strcmp(user, user1 )) {
	case 0:
		printf("Login Success!");
		break;

	default:
		printf("Login Fail!");
		break;
	}

	return 0;
}

