#include <iostream>
using namespace std;
//��������(const int & arr)���ã������βΣ���ֹ�����
//����һЩר�ŵĴ�ӡ������ԭ�������޸�ԭ����

void print(const int& a)
{
	//�޸�a��ֵ�ͻ����
	//a = 20;
	cout << "a--->" << a << endl;
}

int main()
{
	//�������ã������βΣ���ֹ�����
	//���ñ�����һ��Ϸ��Ŀռ�
	//����
	//int& ref = 10; 

	//δ�����൱�� int temp=10; const int &ref=temp;
	//�������Զ�����һ����ʱ����
	const int& ref = 10;
	int a = 10;
	print(a);
	return 0;
}