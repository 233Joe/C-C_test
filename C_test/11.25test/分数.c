#include<stdio.h>
int main(){
	int n = 0;
	float grade[20] = {0.0};
	int i = 0;
	float max = 0.0;
	float least = 0.0;
	float sum  = 0.0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%f", &grade[i]);
		sum += grade[i];
	}
	
	least = grade[0];
	for(i=0; i<n; i++){
		if(max < grade[i]){
			max = grade[i];
		}
		if(least > grade[i]){
			least = grade[i];
		}
	}
	printf("%.2f %.2f %.2f", max, least, sum/n);
	return 0;
}
