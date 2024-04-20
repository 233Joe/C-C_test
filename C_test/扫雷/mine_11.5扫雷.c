#include"mine_11.5.h"
#include"mine_11.5play.c"
void menu(){
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出游戏*****\n");
	printf("********************\n");
}

void play(){

	char arr1[ROW][LINE] = {0};//有地雷的数组
	initial(arr1, ROW, LINE, ' ');//初始化数组
	mine(arr1, ROW, LINE);//随机地雷的位置
	
	char arr2[ROW][LINE] = {0};//无地雷的数组
	initial(arr2, ROW, LINE, '#');//初始化数组

	while(1){

		print(arr2, ROW, LINE);//打印棋盘
		//print(arr1, ROW, LINE);//打印有地雷的棋盘
		record(arr1, arr2, ROW, LINE);//记录玩家输入要扫的位置并判断玩家是否踩雷

		victory(arr1, arr2, ROW, LINE );//判断输赢
		

	}
}

int main(){
	int number = 0;
	do{
		menu();//打印开始菜单
		printf("请输入>");
		number = 0;
		scanf("%d", &number);
		switch (number) {
		case 1:
			printf("开始游戏\n");
			play();
			break;
		case 0:
			printf("游戏关闭\n");
			break;
		default:
			printf("输入有误重新输入\n");
			break;
		}
	}while(number);

	return 0;
}
