#include<stdio.h>
main()
{
	char ch,a[10];int i;
	printf("请输入字符：");
	i=0;
	do
	{
	ch=getchar();
	if(ch!='\n')a[i++]=ch;
	}
	while(i<10&&ch!='\n');
	printf("对调顺序：");
	for(--i;i>=0;--i)putchar(a[i]);
	putchar('\n');
}
