#include <stdio.h>
int main()
{
int 
h=0,f=0,s=0,q=0;
scanf("%d",&q);
h=q/3600;
f=q/60&60;
s=q&60;
printf("%d小时%d分钟%d秒\n",h,f,s);
}
