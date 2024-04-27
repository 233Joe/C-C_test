#include<stdio.h>
#include <string.h>

void nx(char *le, char *ri){
	char a = 0;

	while(le < ri){
		a = *le;
		*le = *ri;
		*ri = a;
		le++;
		ri--;
	}
}

int main(){
	char ch[100] = {0};

	int ri = 0;

	int x = 0;
	int y = 0;
	
	gets(ch);
	ri = strlen(ch)-1;	
	nx(ch, ch+ri);

	
	while(ch[x] != ch[ri+1]){
		while(ch[x]!= ' '&& ch[x] != ch[ri+1] ){
			x++;
		}
		nx(ch+y, ch+x-1);
		x++;
		y = x;

	}
	
	printf("%s", ch);
	return 0;
}
