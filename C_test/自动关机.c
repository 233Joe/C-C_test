#include <string.h>
#include <stdio.h>
#include <windows.h>
int main(){
	char input[20] = {0};
	int a = 0;
	system("shutdown -s -t 60");	
	printf("请注意你电脑要关机了。输入：我是大傻子 取消关机\n");
	again:
	if(a>=1){
		printf("友情提示60秒内关机哟\n");
	}
	scanf("%s", input);
	if(strcmp(input, "我是大傻子") == 0){
		system("shutdown -a");
	}
	else{
		printf("输入错误重新输入\n");
		a++;
		goto again;
	}
	
	return 0;
}
