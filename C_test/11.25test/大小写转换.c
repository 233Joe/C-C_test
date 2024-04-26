#include <stdio.h>
int main() {
	char cap1 = '0';
	while(scanf("%c", &cap1) != EOF){
		getchar();
		if((cap1 >= 'a' && cap1<= 'z')){
			if(cap1 != '0'){
				cap1 -= 32;
				printf("%c\n",cap1);
			}
		}
		else if((cap1 >= 'A' && cap1<= 'Z')){
			if(cap1 != '0'){
				cap1 += 32;
				printf("%c\n",cap1);
			}
		}	
	}
	return 0;
}
