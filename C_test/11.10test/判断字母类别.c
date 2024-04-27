#include <stdio.h>

int main() {
	char let = 0;
	
	while (scanf("%c", &let)!= EOF) {
		if(let == '\n'){
			continue;
		}
		if (let >= 'a' && let <= 'z') {
			let -= 32;
		}
		if (let == 'A' || let == 'E' || let == 'I' 
			|| let == 'O' || let == 'U' ){
			printf("Vowel\n");  
		}
		else {
			printf("Consonant\n");
		}
	}
	return 0;
}
