#include <iostream>
using namespace std;

//������Ϊ�����ķ���ֵ
//�����þֲ�������Ϊ���õķ���ֵ
int& test0()
{
	int a = 10;
	//�����ֲ�����������ջ�����������ռ�ͱ��ͷ�
	return a;
}

//��̬������������ȫ�ֱ��������ȫ�������������֮��ռ��Զ��ͷ�
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
	cout << "d==" << d << endl;//test0()����
	cout << "f==" << f << endl;
	cout << "f==" << f << endl;
	
	//���õĺ������ÿ�����Ϊ��ֵ����
	test1() = 1000;
	cout << "f==" << f << endl;
	cout << "f==" << f << endl;

	
	return 0;
}