#include <stdio.h>
int main() {
	int i = 0;
	for(i=0; i<=2019; i++){
		if(i % 10 == 9 || (i/10) % 10 == 9 || (i/100) % 10 ==9){
			printf("%d ", i);
		}
	}
	return 0;
}
