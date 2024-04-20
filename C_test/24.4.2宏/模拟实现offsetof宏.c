#include<stdio.h>
#include<stddef.h>

#define MY_OFFSETOF(a, b)	(size_t)&(((a*)0)->b)
typedef struct people
{
	short age;	//1
	int phone;	//4
	char name;	//8
}people;

int main()
{
	
	printf("%lld\n",offsetof(people, phone));
	printf("%lld\n",MY_OFFSETOF(people, phone));
	return 0;
}
