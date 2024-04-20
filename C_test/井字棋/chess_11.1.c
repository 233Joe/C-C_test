#include"chess.h"
#include"chess_game.c"

void print(){
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出游戏*****\n");
	printf("********************\n");
}

void play(){
	char board[ROW][LINE] = {0};
	initial(board, ROW, LINE);//初始化数组
	int i = 0;
	
	while(1){
		game(board, ROW, LINE);//打印棋盘
		begin(board, ROW, LINE);//记录玩家输入的值
		i++;
		char price = '0';
		char branch = '0';
		if(i >= 3){
			price = '*';
			branch = victory(board, price);//判断玩家顺利还电脑顺利或者平局
		}
		
		if(branch != '0'){//输出顺利者或平局
			game(board, ROW, LINE);//打印棋盘
			ending(branch);
		}
		
		bot(board);//电脑输入的值
		if(i >= 3){
			price = '#';
			branch = victory(board, price);//判断玩家顺利还电脑顺利或者平局
		}

		if(branch != '0'){//输出顺利者或平局
			game(board, ROW, LINE);//打印棋盘
			ending(branch);
		}
	}
}
int main(){
	int num = 0;
	do{
		print();//打印开始菜单
		printf("请选择>\n");
		scanf("%d", &num);//输入选项
		switch (num) {
		case 1:
			printf("游戏开始加油！\n");
			play();//游戏启动
			break;
		case 0:
			printf("游戏关闭\n");//程序结束
			break;
		default:
			printf("输入有误请重新输入!\n");
			break;
		}
	}while(num);	
	return 0;
}
