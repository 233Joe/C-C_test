#include<stdio.h>
#include<string.h>
long long getdata(long long n)
{
	long long sum = 1;
	while(n)
	{
		sum*=n--;
	}
	return sum;
}
int main(){
	long long sum = 0;
	long long nums = 20;
	while(nums){
		sum+=getdata(nums--);
	}
	printf("%lld",sum);
}
