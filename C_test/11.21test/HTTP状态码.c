#include<stdio.h>
int main(){
	int num= 0;
	char *ch = "0";
	while(scanf("%d", &num) != EOF){
		ch = "0";
		switch (num) {
		case 200:
			ch = "OK";
			break;
		case 202:
			ch = "Accepted";
			break;
		case 400:
			ch = "Bad Request";
			break;
		case 403:
			ch = "Forbidden";
			break;
		case 404:
			ch = "Not Found";
			break;
		case 500:
			ch = "Internal Server Error";
			break;
		case 502:
			ch = "Bad Gateway";
			break;	
		}
		if(num == 200 || num == 202 ||num == 400||num == 403||num == 404|| num == 500||num == 502){
			while(*ch != '\0'){
				printf("%c", *ch++);
			}
			printf("\n");
		}
	}
	return 0;
}
