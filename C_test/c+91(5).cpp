#include <stdio.h>
int main()
{
	int s,b,y,k;
	char ch;
	s=y=k=0;
	printf("ENTER 10 CHARACTERS:");
	for(b=1;b<=10;b++)
	{
	ch=getchar();
	if((ch>='s'&&ch<'z')||(ch>='A'&&ch<'Z'))
	y++;
	else if(ch>='0'&&ch<='9')
	s++;
	else k++;
	}
	printf("y=%d,s=%d,k=%d\n",y,s,k);
	return 0;
	
}
