#include<stdio.h>

void my_transi(int(*arr)[20], char ch, int a, int b, int x, int y){
	int i = 0;
	a -= 1;
	b -= 1;
	int num = 0;
	if(ch == 'r'){	
		for(i=0;i<y;i++){
			num = arr[a][i];
			arr[a][i] = arr[b][i];
			arr[b][i] = num;
		}
	}
	else if(ch == 'c'){
		for(i=0;i<x;i++){
			num = arr[i][a];
			arr[i][a] = arr[i][b];
			arr[i][b] = num;
		}
	}
}

int main(){
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	char ch = '0';
	int a = 0;
	int b = 0;
	int arr[20][20] = {0};
	
	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &arr[i][j]);
		}
	}	
	scanf("%d", &k);
	for(int i=0;i<k;i++){
		fflush(stdin);
		scanf("%c %d %d", &ch, &a, &b);
		my_transi(arr, ch, a, b, x, y);
	}
	
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
