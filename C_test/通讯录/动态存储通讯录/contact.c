#include "contact.h"




//菜单
void menu() {
	printf("**********通讯录***********\n");
	printf("*****1.增加	   2.删除******\n");
	printf("*****3.查找	   4.修改******\n");
	printf("*****5.排序	   6.查看******\n");
	printf("**********0.退出***********\n");
}


//初始化通讯录
void initialize(data_base* pc) {
	pc->storage = (data*)calloc(3, sizeof(data));
	if(pc->storage == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;
	}
	pc->count = 0;
	pc->c = 3;
}


//添加数据
void add(data_base* pc)
{
	if (pc->count == pc->c)
	{
		data* p = (data*)realloc(pc->storage, (pc->c+2)* sizeof(data));
		if(p == NULL)
		{
			printf("%s\n", strerror(errno));
			return ;
		}
		pc->storage = p;
		printf("增容成\n功");
		pc->c += 2;
	}
	
	printf("请输入姓名->" );
	scanf("%s", pc->storage[pc->count].name);
	printf("请输入年龄->" );
	scanf("%d", &pc->storage[pc->count].age);
	printf("请输入性别->" );
	scanf("%s", pc->storage[pc->count].sex);
	printf("请输入电话->" );
	scanf("%s", pc->storage[pc->count].phone);
	printf("请输入地址->" );
	scanf("%s", pc->storage[pc->count].site);
	pc->count++;
	printf("添加完成\n");
}


//打印通讯录的内容
void look(const data_base* pc) {
	//assert(pc);//不知为何报错
	int i = 0;
	if (pc->count == 0) {
		printf("通讯录是空的\n");
		return;
	}

	printf("%-20s\t%-5s\t%-10s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count ; i++) {
		printf("%-20s\t%-5d\t%-10s\t%-15s\t%-30s\n",
		       pc->storage[i].name,
		       pc->storage[i].age,
		       pc->storage[i].sex,
		       pc->storage[i].phone,
		       pc->storage[i].site);
	}
}


//删除数据
void dele(data_base* pc) {
	if (pc->count == 0)
	{
		printf("通讯录是空的\n");
		return ;
	}
	char name[MAX_NAME] = {0};
	int i = 0;
	printf("请输入需要删除人的姓名->");
	scanf("%s", name);
	int pos = find_1(pc, name);

	if (pos == -1)
	{
		printf("没有找到需要删除的人\n");
		return ;
	}
	for (i = pos; i < pc->count; i++)
	{
		pc->storage[i] = pc->storage[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}


//查找数据
void find(const data_base* pc) {
	if (pc->count == 0)
	{
		printf("通讯录是空的\n");
		return ;
	}

	int pos = 0;
	char name[MAX_NAME] = {0};
	printf("请输入需要查找人的姓名->");
	scanf("%s", name);
	pos = find_1(pc, name);

	if (pos == -1) {
		printf("没有找到需要查找人的姓名\n");
		return ;
	}
	printf("%-20s\t%-5s\t%-10s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");

	printf("%-20s\t%-5d\t%-10s\t%-15s\t%-30s\n",
	       pc->storage[pos].name,
	       pc->storage[pos].age,
	       pc->storage[pos].sex,
	       pc->storage[pos].phone,
	       pc->storage[pos].site);
	printf("查找成功\n");
}

int find_1(const data_base* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(name, pc->storage[i].name))
			return i;	
	}
	return -1;
}


//修改数据
void alter(data_base* pc)
{
	if (pc->count == 0)
	{
		printf("通讯录是空的\n");
		return ;
	}
	
	int pos = 0;
	char name[MAX_NAME] = {0};
	printf("请输入需要更改的人的姓名->");
	scanf("%s", name);
	pos = find_1(pc, name);
	
	if (pos == -1)
	{
		printf("没有找到需要修改的人\n");
		return ;
	}

	printf("请输入姓名->" );
	scanf("%s", pc->storage[pos].name);
	printf("请输入年龄->" );
	scanf("%d", &pc->storage[pos].age);
	printf("请输入性别->" );
	scanf("%s", pc->storage[pos].sex);
	printf("请输入电话->" );
	scanf("%s", pc->storage[pos].phone);
	printf("请输入地址->" );
	scanf("%s", pc->storage[pos].site);
	printf("修改成功\n");	
}


//排序
void sort(data_base* pc)
{
	qsort(pc->storage, pc->count, sizeof(data), compare);
	printf("排序成功\n");
}
//比大小 
int compare(const void* a1,const void* a2)
{
	//方法1
	return strcmp(((data*)a1)->name, ((data*)a2)->name);
	
	//方法2
	//return ((data*)a2)->name - ((data*)a1)->name;// 按照名字从大到小排序
	
	//方法3
//	data *p1 = (data *)a1;
//	data *p2 = (data *)a2;
//	return p1->name - p2->name; // 按照名字从大到小排序
}

