#include <stdio.h>

int main() {
	char ch[50] = {0};
	int a = 0;
	int b = 0;
	for(int i = 0; i<=50 ;i++ ){
		scanf("%c", &ch[i]);
		if (ch[i] == '0'){
			break;
		}
		if (ch[i] == 'A') {
			a++;
		}
		if (ch[i] == 'B') {
			b++;
		}
	}
	if (a>b) {
		printf("A");
	}
	else if(a<b){
		printf("B");
	}
	else {
		printf("F");
	}
	
	return 0;
}
