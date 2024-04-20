#include <stdio.h>
int main(){
	int arr[100][100] = {0};
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i = 0;i<n;i++)
	{
		for(j = i;j<n;j++){
			if(arr[i][j] == 0)
			{
				printf("NO");
				return 0;
			}
		}
		for(j = 0;j<i;j++){
			if(arr[i][j] != 0)
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
