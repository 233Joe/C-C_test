#include"statement.h"
#include"function.c"

int main()
{
	int select = 0;
	base_group con;
	initial(&con);
	
	do{
		menu();
		printf("\n请输入你的选项:");
		scanf("%d", &select);
		fflush (stdin);
		switch (select)
		{
		case 1:
			add(&con);
			break;
		case 2:
			dele(&con);
			break;
		case 3:
			seekprint(&con);
			break;
		case 4:
			modify(&con);
			break;
		case 5:
			sort(&con);
			break;
		case 6:
			view(&con);
			break;
		case 7:
			printf("重置通讯录");
			initial(&con);
			break;
		case 0:
			printf("退出通讯录");
			break;
		default:
			printf("输入有误请重新输入\n\n");
			break;
		}
	}while(select);
	return 0;
}
