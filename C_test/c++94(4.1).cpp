#include<stdio.h>
main()
	{
		char ch,s[20];int i;
		printf("输入字符串：");
		i=0;
		do
		{
			ch=getchar();
			if(ch!='\n')s[i++]=ch;
		}
		while(i<20&&ch!='\n');
		printf("反向顺序：");
		for(--i;i>=0;--i)putchar(s[i]);
		putchar('\n');
	}
