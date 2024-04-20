#include<stdio.h>
#include <string.h>


typedef struct date
{
	int set;
	char name[10];
}date;


int main()
{
	//创建一个用于写入的空文件
	FILE* pf = fopen("textfopen.txt", "w");	
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//字符输出函数使用
	fputc('q', pf);
	
	fclose(pf);
	pf = NULL;
	
	
	//打开一个用于输出的文件
	pf = fopen("textfopen.txt", "r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//字符输入函数使用
	int ch = fgetc(pf);
	printf("%c\n", ch);
	
	fclose(pf);
	pf = NULL;
	
	
	//追加到一个文件
	pf = fopen("textfopen.txt", "a");	
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//文本行输出函数
	char* c = "abced"; 
	fputs(c, pf);
	
	fclose(pf);
	pf = NULL;
	
	
	//打开一个用于输出的文件
	pf = fopen("textfopen.txt", "r");	
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//文本行输入函数
	char c1[20];
	fgets(c1, 7, pf);
	printf("%s\n", c1);
	
	
	//创建一个用于写入的空文件
	pf = fopen("textfopen.txt", "w");	
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	date a = {20, "qiao"};
	//格式化输出函数的使用
	fprintf(pf,"%d %s", a.set, a.name);
	fclose(pf);
	pf = NULL;
	
	
	//打开一个用于输出的文件
	pf = fopen("textfopen.txt", "r");	
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//格式化输入函数的使用
	fscanf(pf,"%d %s", &a.set, a.name);
	printf("%d %s", a.set, a.name);
	return 0;
}

