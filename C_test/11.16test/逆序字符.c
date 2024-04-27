#include<stdio.h>
#include <string.h>

int main(){
	char ch[10001] = {0};
	int le = 0;
	int ri = 0;
	char a = 0;
	
	gets(ch);
	ri = strlen(ch)-1;	
	while(le < ri){
		a = ch[le];
		ch[le] = ch[ri];
		ch[ri] = a;
		le++;
		ri--;
	}

	printf("%s", ch);
	return 0;
}
