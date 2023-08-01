#include <iostream>
using namespace std;
//常量引用(const int & arr)作用：修饰形参，防止误操作
//比如一些专门的打印函数，原本不会修改原数据

void print(const int& a)
{
	//修改a的值就会出错
	//a = 20;
	cout << "a--->" << a << endl;
}

int main()
{
	//常量引用，修饰形参，防止误操作
	//引用必须引一块合法的空间
	//出错
	//int& ref = 10; 

	//未出错，相当于 int temp=10; const int &ref=temp;
	//编译器自动创建一个临时变量
	const int& ref = 10;
	int a = 10;
	print(a);
	return 0;
}