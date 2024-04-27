#include<stdio.h>

void sort(int *p, int sz){
	int i = 0;
	int j = 0;
	int num = 0;
	for(i=sz-1; i>=0; i--){
		for(j=i;j>=0;j--){
			if(p[i] < p[j]){
				num = p[i];
				p[i] = p[j];
				p[j] = num;
			}
		}
	}
}

void print(int *pn,int *pm, int n, int m){
	int len = 0;
	int lem = 0;
	while(len != n && lem != m){
		if(lem != m && len != n && pn[len] <= pm[lem]){
			printf("%d ", pn[len]);
			len++;
		}
		if(lem != m && len != n && pn[len] >= pm[lem]){
			printf("%d ", pm[lem]);
			lem++;
		}
	}
	if(len == n){
		while(lem != m){
			printf("%d ", pm[lem]);
			lem++;
		}
	}
	else{
		while(len != n){
			printf("%d ", pn[len]);
			len++;
		}
	}
}

int main(){
	int m = 0;
	int n = 0;
	int i = 0;
	int n1[10] = {0};
	int m1[10] = {0};

	scanf("%d %d", &n , &m);
	printf("输入数组1：");
	for(i=0; i<n; i++){
		scanf("%d", &n1[i]);
		
	}
	printf("输入数组2：");
	for(i=0; i<m; i++){
		scanf("%d", &m1[i]);
	}
	printf("\n");	
	sort(n1, n);//把数组n1以小到大排列
	sort(m1, m);//把数组m1以小到大排列

	print(n1, m1, n, m);//合并以小到大排列打印数组n1和m1

	return 0;
}
