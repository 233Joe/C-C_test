#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

#ifndef _COMMON
#define _COMMON

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_PONE 15
#define MAX_SITE 30

//菜单
void menu();


//创建需要存储的数据类型
typedef struct data
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char phone[MAX_PONE];
	char site[MAX_SITE];
	char null;
}data;


//创建数据数量100个
typedef struct data_base
{
	data* storage;
	int count;
	int c;
}data_base;

//扩容通讯录
void Memory(data_base* pc);

//释放通讯录
void release(data_base* pc);


//初始化通讯录
void initialize(data_base* pc);

//添加数据
void add(data_base* pc);

//查看数据
void look(const data_base* pc);

//查找数据
void find(const data_base* pc);
int find_1(const data_base* pc, char name[]);

//删除数据
void dele(data_base* pc);

//修改数据
void alter(data_base* pc);

//排序
void sort(data_base* pc);

//保存通讯录
void preserve(data_base* pc);

//比大小
int compare(const void* a1,const void* a2);
#endif
