#include<stdio.h>
int main()
{
	FILE* fp =	fopen("test.txt", "w");
	fputs("abcdef123", fp);
	fclose(fp);
	
	fp = fopen("test.txt", "r");
	
	char ch = fgetc(fp);
	printf("%c\n", ch);
	
	//fseek设置指针偏移量与位置
	fseek(fp, -2, SEEK_END);
	ch = fgetc(fp);
	printf("%c\n", ch);
	
	ch = fgetc(fp);
	printf("%c\n", ch);
	
	//ftell函数返回指针当前位置
	int x = ftell(fp);
	printf("%d\n", x);
	
	
	//rewind让指针返回起始位置
	rewind(fp);
	ch = fgetc(fp);
	printf("%c\n", ch);
	return 0;
}
