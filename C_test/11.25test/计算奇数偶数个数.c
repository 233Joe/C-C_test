#include <stdio.h>
int main() {
	int n = 0;
	int i = 0;
	int odd = 0;
	int even = 0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i % 2 == 0){
			odd++;
		}
		else{
			even++;
		}
	}
	printf("%d %d", even, odd);
	return 0;
}
