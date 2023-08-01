#include <iostream>
using namespace std;

//引用作为函数的返回值
//不能用局部变量作为引用的返回值
int& test0()
{
	int a = 10;
	//出错，局部变量保存在栈区，出函数空间就被释放
	return a;
}

//静态变量，常量，全局变量存放在全局区，程序结束之后空间自动释放
int& test1()
{
	static int a = 10;
	return a;
}

int main()
{
	int a = 10;
	int& b = a;
	int c = 27;
	cout << "a==" << a << "b==" << b << "c==" << c << endl;
	b = c;
	cout << "a==" << a << "b==" << b << "c==" << c << endl;
	
	int& d=test0();
	int& f = test1();
	cout << "d==" << d << endl;
	cout << "d==" << d << endl;//test0()出错
	cout << "f==" << f << endl;
	cout << "f==" << f << endl;
	
	//引用的函数调用可以作为左值存在
	test1() = 1000;
	cout << "f==" << f << endl;
	cout << "f==" << f << endl;

	
	return 0;
}