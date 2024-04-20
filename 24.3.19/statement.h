#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Max_name 20
#define Max_gen 5
#define Max_phone 15
#define Max_address 50
#define Max_base 100

#ifndef _COMMON
#define _COMMON

typedef struct base
{
	char name[Max_name];
	int age;
	char gender[Max_gen];
	char phone[Max_phone];
	char address[Max_address];
}base;

typedef struct base_group
{
	base information[Max_base];
	int count;
}base_group;

#endif

void menu();//打印通讯录菜单

void initial(base_group* pc);//初始化数组

void add(base_group* pa);//添加信息

void dele(base_group* pd);//删除信息

int seek(base_group* ps, char* na);//查找信息
void seekprint(base_group* ps);

void modify(base_group* pm);//修改数据

int compare(const void* pc1,const void* pc2);//比大小

void sort(base_group* ps);//排序数据

void view(base_group* pv);//打印数据
