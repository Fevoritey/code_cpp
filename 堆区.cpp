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
	//�������ٵ��ڴ��ɳ���Ա����,�������н�����̬�ͷ�
	cout << "����������:" << *p << endl;
	cout << "�ö����ĵ�ַ:" << (int)&p << endl;
	//delete + �ڴ��ַ �ͷ��ڴ��������
	delete p;
	//delete + [] + �ڴ��ַ,�ͷ��ڴ��������
	delete[] arr;
	
	//���ã������������
	//�﷨�� �������� &����=ԭ��
	int a = 10;
	int& b = a;//��ʱa,b��ָ��10���ڵ��ڴ�ռ�
	cout << "a��ֵΪ��" << a << endl;
	cout << "b��ֵΪ��" << b << endl;
	cout << "a�ĵ�ַΪ��" <<(int) &a << endl;
	cout << "b�ĵ�ַΪ��" << (int) &b << endl;
	return 0;
}