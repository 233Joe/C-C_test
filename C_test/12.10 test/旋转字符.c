#include<stdio.h>
#include <string.h> 

int main()
{
	char num = '0';
	char ch[] = "abcdef";
	int i =0, j = 0, k = 0;
	scanf("%d", &k);
	if(k != 0){
		for(i=0;i<k;i++){
			num = ch[0];
			for(j=0;j<sizeof(ch)-1;j++){
				if(ch[j+1] != '\0'){
					ch[j] = ch[j+1];	
				}
				else
					ch[j] = num;
			}
		}
	}

	printf("%s", ch);
	
	
	return 0;
}
