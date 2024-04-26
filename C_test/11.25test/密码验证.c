#include <stdio.h>
#include <string.h>
int main() {
	char code1[100] = "0";
	char code2[100] = "0";
	
	scanf("%s %s", code1, code2);
	if(	strcmp(code1, code2) == 0){
		
		printf("same");
	}
	else
		printf("different");
	
	return 0;
}
