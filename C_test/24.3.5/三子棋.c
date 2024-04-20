#include<stdio.h>

//打印菜单
void menu()
{
	printf("*************三子棋*************\n");
	printf("*************1.游玩*************\n");
	printf("*************0.退出*************\n");
	printf("请选择>");
}

//打印棋盘
void print(char arr[])
{
	printf("  %c  |  %c  |  %c  \n", arr[1], arr[2], arr[3]);
	printf("-----|-----|-----\n");
	printf("  %c  |  %c  |  %c  \n", arr[4], arr[5], arr[6]);
	printf("-----|-----|-----\n");
	printf("  %c  |  %c  |  %c  \n", arr[7], arr[8], arr[9]);
}


void function(char arr[], char* x)
{
	if(*x == 'O')
	{
		*x = 'X';
		printf("蓝方请下棋>");
	}	
	else
	{
		*x = 'O';
		printf("红方请下棋>");
	}
	
	int a = 0, b = 0, p = 0;
	
	q1 : scanf("%d %d",&a, &b);
	if(b > 3 || b <= 0)
		a = 0;	
//计算落子位置
	switch (a) {
	case 1:
		p = b * a;
		break;
	case 2:
		p = b + 3;
		break;
	case 3:
		p = (a*2) + b;
		break;
	default:
		print(arr);
		q2 : printf("输入错误请重新输入\n");
		goto q1;
	}
	if(*x == 'O' && (arr[p] == ' ' || arr[p] == '\0'))
		arr[p] = 'O';
	
	else if(*x == 'X' && (arr[p] == ' ' || arr[p] == '\0'))
		arr[p] = 'X';
	
	else
		goto q2;
}

char determine(char arr[], char x)
{
	int i = 0;
	//判断横向胜利
	for(i=1;i<=7;i+=3)
	{
		if(arr[i] == arr[i+1] && arr[i+2] == arr[i] && arr[i] == x)
			return x;
	}
	//判断纵向胜利
	for(i=1;i<=3;i++)
	{
		if(arr[i] == arr[i+3] && arr[i] == arr[i+6] && arr[i] == x)
			return x;
	}
	//判断对角胜利
	
	if(arr[1] == arr[5] && arr[9] == arr[1] && arr[1] == x)
		return x;
	
	else if(arr[3] == arr[5] && arr[7] == arr[3] && arr[3] == x)
		return x;
	
	return '0';
}

void victory(char v, int* n,char arr[])
{
	int i = 0;
	print(arr);
	for(i=1;i<=10;i++)
		arr[i] = ' ';
	if(v == 'O')
		printf("恭喜红方胜利！\n\n");	
	else
		printf("恭喜蓝方胜利！\n");
	*n = 0;
}

int main()
{
	int select = 1, n = 0;
	char v = '0';
	char arr[10] = " ";
	
	while(select != 0){
		char x = '0';
		n = 1;
		v = '0';
		menu();
		scanf("%d", &select);
		switch (select) {
		case 1:
			while(n){
				print(arr);
				function(arr, &x);
				n++;
				if(n >= 4)
					v = determine(arr, x);
				if(v != '0')
					victory(v, &n, arr);
			}
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误请重新输入\n");
			continue;
		}
	}
	return 0;
}
