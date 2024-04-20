#include"statement.h"

void menu()	//菜单功能
{
	printf("************通讯录*************\n");
	printf("*****1.增加	   2.删除******\n");
	printf("*****3.查找	   4.修改******\n");
	printf("*****5.排序	   6.查看******\n");
	printf("*****7.重置	   0.退出******\n");
}

void initial(base_group* pc)	//重置功能
{
	memset(pc->information, 0, sizeof(pc->information));
	pc->count = 0;
}

void add(base_group* pa)	//添加功能
{
	if (pa->count == 100)
	{
		printf("通讯录以满\n");
		return;
	}
	printf("请输入姓名: ");
	scanf(" %s", pa->information[pa->count].name);
	fflush (stdin);
	printf("请输入年龄: ");
	scanf(" %d", &pa->information[pa->count].age);
	fflush (stdin);
	printf("请输入性别: ");
	scanf(" %s", pa->information[pa->count].gender);
	fflush (stdin);
	printf("请输入电话: ");
	scanf(" %s", pa->information[pa->count].phone);
	fflush (stdin);
	printf("请输入地址: ");
	scanf(" %s", pa->information[pa->count].address);
	fflush (stdin);
	pa->count++;
	printf("添加完成！\n");
}

void dele(base_group* pd) //删除功能
{
	if(pd->count == 0)
	{
		printf("通讯录为空\n");
		return ;
	}
	printf("请输入要删除联系人的姓名：");
	char name[Max_name] = "0";
	scanf("%s", name);
	int x = seek(pd, name);

	if(x == -1)
	{
		printf("未找到要删除的联系人\n");
		return ;
	}
	while(x < pd->count)
	{
		pd->information[x] = pd->information[x+1];
		x++;
	}
	pd->count--;
	printf("删除成功\n");
}

void seekprint(base_group* ps)	//查找打印功能
{
	printf("请输入要查找联系人的姓名：");
	char name[Max_name] = "0";
	scanf("%s", name);
	int x = seek(ps, name);

	if(x == -1)
	{
		printf("未找到要查找的联系人\n");
		return ;
	}
	printf("查找成功\n");
	printf("%-10s\t%-5s\t%-10s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-10s\t%-5hd\t%-10s\t%-15s\t%-30s\n", 
		ps->information[x].name, 
		ps->information[x].age,
		ps->information[x].gender,
		ps->information[x].phone,
		ps->information[x].address);
}

int seek(base_group* ps, char* na)	//查找功能
{
	int x = ps->count;
	while(x--)
	{
		if(strcmp(ps->information[x].name, na) == 0) return x;
	}
	return -1;
}

void modify(base_group* pm)//修改数据
{
	if(pm->count == 0)
	{
		printf("通讯录为空\n");
		return ;
	}
	printf("请输入要修改联系人的姓名：");
	char name[Max_name] = "0";
	scanf("%s", name);
	int x = seek(pm, name);
	
	if(x == -1)
	{
		printf("未找到要修改的联系人\n");
		return ;
	}
	printf("请输入姓名:\n");
	scanf(" %s", pm->information[x].name);
	printf("请输入年龄:\n");
	scanf(" %d", &pm->information[x].age);
	printf("请输入性别:\n");
	scanf(" %s", pm->information[x].gender);
	printf("请输入电话:\n");
	scanf(" %s", pm->information[x].phone);
	printf("请输入地址:\n");
	scanf(" %s", pm->information[x].address);
	printf("修改成功\n");
}

void sort(base_group* ps)//排序功能
{
	if(ps->count == 0)
	{
		printf("通讯录为空\n");
		return ;
	}
	qsort(ps->information, ps->count, sizeof(base), compare);
	printf("排序成功\n");
}

int compare(const void* pc1,const void* pc2)	//比大小
{
	return strcmp(((base*)pc1)->name, ((base*)pc2)->name);
}

void view(base_group* pv)//打印数据
{
	if(pv->count == 0)
	{
		printf("通讯录为空\n");
		return ;
	}
	printf("%-10s\t%-5s\t%-10s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	int x = 0;
	while(x >= 0 && x < pv->count)
	{
		printf("%-10s\t%-5d\t%-10s\t%-15s\t%-30s\n", 
			pv->information[x].name, 
			pv->information[x].age,
			pv->information[x].gender,
			pv->information[x].phone,
			pv->information[x].address);
		x++;
	}
	
}
