#include "contact.h"
#include "contact.c"

int main()
{
	int import = 0;
	//创建通讯录
	data_base con;
	//初始化通讯录
	initialize(&con);
	do
	{
		//打印菜单
		menu();
		printf("请输入你的选择>");
		scanf("%d", &import);
		switch (import) {
		case 1:
			add(&con);
			break;
		case 2:
			dele(&con);
			break;
		case 3:
			find(&con);
			break;
		case 4:
			alter(&con);
			break;
		case 5:
			sort(&con);
			break;
		case 6:
			look(&con);
			break;
		case 7:
			release(&con);
			initialize(&con);
			printf("重置通讯录\n");
			break;
		case 8:
			preserve(&con);
			printf("保存成功\n");
			break;
		case 0:
			preserve(&con);
			release(&con);
			printf("退出通讯录");
			break;
		default:
			printf("您的输入有误");
			break;
		}
	}while(import);	
	return 0;
}
