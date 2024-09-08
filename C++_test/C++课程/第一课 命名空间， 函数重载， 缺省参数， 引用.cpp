#include <iostream>
 using namespace std;//	C++库所有东西都放在std命名空间中。

//命名空间的使用
//using std::cout;
//using std::endl;

//std::cin >> i ;
//std::cout << "qq" << i << std::endl;



//缺省参数 全缺省
void Func1(int a = 0, int b = 0, int c = 0)
{
	cout << "全缺省" << endl;
}
//半缺省 必须从右往左依次缺省
void Func2(int a, int b, int c = 0)
{
	cout << "半缺省" << endl;
}

//函数重载
//个数不同 / 顺序不同 / 类型不同
void Add(int a, int b, int c);

void Add(long a, long b, long c);

void Add(long a, char b);

void Add(char a, long b);


int main()
{
	int i;
	std::cin >> i ;
	std::cout << "qq" << i << std::endl;
	
	
	Func1();
	Func2(1, 2);
	
	
//引用：就是给一个变量取别名
	int& a = i;	//引用必须在定义的时候初始化
	a = 0;
	cout << i << endl;
	
	int c = 1;
	int& d = c;
	const int& e = c;//权限的缩小是可以的
	
	
	int b = 0;
	double db = b;//隐士类型的转换
	const double& rd = b;//必须要加const,因为权限缩小的问题
	
	return 0;
}


