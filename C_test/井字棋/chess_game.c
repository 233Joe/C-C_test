#include"chess.h"

void initial(char board[ROW][LINE],int row,int line){//初始化数组
	int i = 0, j = 0;
	for(i=0; i< row; i++){	
		for(j=0; j< line; j++){
			board[i][j] = ' ';
		}
	}
}

void game(char board[ROW][LINE],int row,int line){
	int i = 0;
	int j = 0;

	for(i=0; i< row; i++){//打印棋盘
		
		for(j=0; j< line; j++){
			printf(" %c ", board[i][j]);
			
			if(j<line-1){
				printf("|");
			}		
		}
		printf("\n");
		if(i < row-1){
			
			for(j=0;j< line;j++){
				printf("---");
				
				if(j < line-1){
					printf("|");
				}
			}	
		}
		printf("\n");
	}
}

void begin(char board[ROW][LINE],int row,int line){//记录输入的值
		row = 0, line = 0;
		printf("请输入坐标>\n");
		scanf("%d %d", &row, &line);
	if(board[row-1][line-1] == ' ' && 1<=row && row<= 3 && 1<=line && line<= 3 ){
		board[row-1][line-1] = '*';
	}	
	else{
		printf("输入有误请重新输入");	
		begin(board, row, line);
	}
}

void bot(char board[ROW][LINE]){//电脑输入的值
	int x = 0;
	int y = 0;

	printf("电脑输入>\n");
	srand((unsigned int) time(NULL));
	
	while(1){
		x = rand() % 3;
		y = rand() % 3;
		if(board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}

int victory(char board[ROW][LINE], char price){//判断玩家顺利还电脑顺利或者平局
	int x = 0;
	int y = 0;
	int player = 0;
	char branch = '0';
	for(y=0; y<LINE; y++){
		if(board[y][y] == price){
			player++;
		}
	}
	if(player == 3){
		branch = price;
		return branch;
	}
	player = 0;
	
	for(y=0; y<LINE; y++){	
		if(board[y][LINE-y-1] == price){
			player++;
		}		
	}
	if(player == 3){
		branch = price;
		return branch;
	}
	player = 0;	
	
	for( x=0; x < ROW ;x++){
		for(y=0; y< LINE; y++){
			
			if(board[x][y] == price){
				player++;
			}
		}	
		if(player == ROW){
			branch = price;
			return branch;
		}
		player = 0;
		
		for(y=0; y< LINE; y++){
			if(board[y][x] == price){
				player++;
			}
		}	
		if(player == LINE){
			branch = price;
			return branch;
		}
		player = 0;	
	}
	for(x=0; x<LINE; x++){//判断是否平局
		for(y=0; y<LINE; y++){
			
			if(board[x][y] != ' '){
				player++;
			}
		}
	}
	if(player == LINE*ROW){
		branch = '1';
		return branch;
	}
	return branch;
}

void ending(char branch){
	if(branch == '*'){
		printf("玩家顺利！\n");
		main();
	}
	else if(branch == '#'){
		printf("电脑顺利！\n");
		main();
	}
	else if(branch == '1'){
		printf("平局\n");
		main();
	}
}
