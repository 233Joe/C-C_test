#include"mine_11.5.h"

void initial(char arr[ROW][LINE],int row,int line, char i){//初始化数组
	int x = 0, y = 0;
	for(x=0; x< row; x++){	
		for(y=0; y< line; y++){
			arr[y][x] = i;
		}
	}
}

void mine(char arr1[ROW][LINE], int row, int line){//随机地雷的位置
	srand((unsigned int) time(NULL));
	int x = 0;
	int y = 0;
	int i = 1;
	while(i <= row-1){

		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if(arr1[x][y] == ' '){
			arr1[x][y] = '*';
			i++;
		}
	}
	//	print(arr1, ROW, LINE);
}

void print(char arr[ROW][LINE], int row, int line){//打印棋盘
	int x=1;
	int y=1;
	printf("************扫雷***************\n");
	printf(" ");
	for(y=1; y < line-1; y++){
		printf("  %d", y);
	}
	printf("\n");
	for(x=1; x< row-1; x++){
		printf("%d", x);
		for(y=1; y< line-1; y++){
			printf("  %c", arr[x][y]);
		}
		printf("\n");
	}
	printf("***********扫雷***************\n");
}

void record(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line){//记录玩家输入要扫的位置
	row = 0, line = 0;
	printf("请输入坐标>\n");
	scanf("%d %d", &row, &line);
	if(arr1[row][line] == '*'){//判断玩家是否踩雷
		printf("\"bong\"你被炸死了\n");
		print(arr1, ROW, LINE);
		main();
	}
	else if(arr2[row][line] == '#' && 1<=row && row< ROW-1 && 1<= line && line< LINE-1){
		arr2[row][line] = ' ';
	}
	else{
		printf("输入有误请重新输入\n");	
		print(arr2, ROW, LINE);
		record(arr1, arr2, ROW, LINE);
	}
	related(arr1, arr2, row, line);//向外延申

}

void related(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line){//向外延申
	int x = 0;
	int y = 0;
	int num = 48;
	for(x = row-1; x <= row+1; x++){//判断周围有没有雷
		for(y = line-1; y <= line + 1; y++){
			if(arr1[x][y] == '*'){
			num++;
			}
		}
	}
	if(num == 48){
		arr2[row][line] = ' ';
		for(x = row-1; x <= row+1; x++){
			for(y = line-1; y <= line + 1; y++){
				if(x <= 9 && x >= 1 && y <= 9 && y >= 1 && arr2[row][line] != arr2[x][y] ){
				//判断是否符合递归条件且若周围没有雷往外扩展，直到遇到雷为止
					
					related(arr1, arr2, x, y);
				}
			}
		}
	}
	else if(num != 48){//若周围有雷不扩展
		arr2[row][line] = (char)num;
	}
}

void victory(char arr1[ROW][LINE], char arr2[ROW][LINE], int row, int line){//胜利条件判断
	int x = 1;
	int y = 1;
	int number = 0;
	for(x = 1; x < row-1; x++){
		for(y = 1; y < line-1; y++){
			if(arr2[x][y] == '#'){
				number++;
			}
		}
	}
	printf("jjj%djjj\n", number);
	if(number == row - 1){
		printf("恭喜你通关啦\n");
		print(arr1, ROW, LINE);
		main();
	}
}


	
	
	
	

