#include <iostream>
using namespace std;

int* func()
{
	return new int(10);
}
int main()
{
	int* p = func();
	int* arr = new int [10];
	//堆区开辟的内存由程序员管理,程序运行结束后动态释放
	cout << "堆区的数据:" << *p << endl;
	cout << "该堆区的地址:" << (int)&p << endl;
	//delete + 内存地址 释放内存变量数据
	delete p;
	//delete + [] + 内存地址,释放内存变量数据
	delete[] arr;
	
	//引用：给变量起别名
	//语法： 数据类型 &别名=原名
	int a = 10;
	int& b = a;//此时a,b均指向10所在的内存空间
	cout << "a的值为：" << a << endl;
	cout << "b的值为：" << b << endl;
	cout << "a的地址为：" <<(int) &a << endl;
	cout << "b的地址为：" << (int) &b << endl;
	return 0;
}