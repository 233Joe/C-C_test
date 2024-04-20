#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
int main(){
	char arr[] = {"陈明希 你妈死了 cnm"};
	char arr1[] ={"##################"};
	int a = strlen(arr1) - 1;

	for(int i=0; i<=a; i++, a--){
		
		arr1[i] = arr[i];
		arr1[a] = arr[a];
		
		printf("%s\n", arr1);
		Sleep(200);
		system("cls");
	}	
	printf("%s\n", arr);
	
	return 0;
}
  
int main(){
	char code1[20] = {'1','3','5','2','4','6'};
	char code2[20] = {0}; 
	int i = 0;
	
	printf("%s", code1);
	for( i = 3 ;i >  0; i--){
		printf("请输入密码\n");
		scanf("%s", code2);
		
		if(strcmp(code1 ,code2) == 0){		
			
			printf("----登陆成功----\n");
			break;
		}
		else
			printf("密码错误，重新输入剩余%d机会\n", i-1);
	}
	if(i<1){
		printf("退出程序");
	}
	
	return 0;
}
  */
#include <time.h>
#include <stdlib.h>
/*
void menu(){
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
	
}
void game(){
	int guess = 0;
	int ret = rand()%100 + 1;	
	
	while(1){
		printf("猜数字：");
		scanf("%d", &guess);
		if(guess < ret){
			printf("猜小了\n");
		}
		else if(guess > ret){
			printf("猜大了\n");
		}
		else {
			printf("猜对了");
			break;
		}
	}
	
}
int main(){
	int input = 0;
	srand((unsigned int) time(NULL));
	
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	}while(input);
	
	return 0;
}
  */

int main(){
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意你电脑要关机了。输入：我是sb取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪")== 0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	
	return 0;
}
