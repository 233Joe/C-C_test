#include<stdio.h>
#include<stdlib.h>

int N;
int exchange(int *p);

int main()
{
    int i,a[100]={0},*pointer=a;
    printf("一共几个数字: ");
    scanf("%d",&N);
    printf("请输入需要倒序的数字: ");
    for(i=0;i<N;i++)
    scanf("%d",pointer++);
    pointer=a;
    exchange(pointer);
    pointer=a;
    printf("倒序结果: ");
    for(i=0;i<N;i++) printf("%d ",*pointer++);
    system("pause");
}
int exchange(int *p)
{
    int i,temp,time=(N-1)/2,*pp;
    pp=p+N-1;
    for(i=0;i<=time;i++,p++,pp--)
    {   
        temp=*p;
        *p=*pp;
        *pp=temp;
    }
    return 0;
}
