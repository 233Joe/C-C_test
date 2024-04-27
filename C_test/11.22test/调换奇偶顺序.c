#include<stdio.h>

void order(int *p, int sz){
	int ri = sz-1;
	int le = 0;
	int num = 0;
/*	方法1
	while(le < ri){
		if(p[le] % 2 == 0){
			num = p[le];
			
			while((sz/2) <= ri){
				if(p[ri] % 2 != 0){
					p[le] = p[ri];
					p[ri] = num;
					ri--;
					break; 
				}	
				ri--;
			}
		}
		le++;

	}*/
//方法2	
	while(le < ri){
		
		if((le < ri) && p[ri] % 2 == 0){
			ri--;
			continue;
		}
		if((le < ri) && p[le] % 2 != 0){
			le++;
			continue;
		}
		if(le < ri){
			num = p[le];
			p[le] = p[ri];
			p[ri] = num;
			ri--;
			le++;
		}
	}
}

int main(){
	
	int arr[10] = {0};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<sz-1; i++){
		scanf("%d ", &arr[i]);
	}
	
	order(arr, sz);
	
	for(i=0; i<sz; i++){
		printf("%d ", arr[i]);
	}

	
	return 0;
}
