/*
FileName : T5_32.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/#include<iostream>
using namespace std;
int main()
{
	int j;
	double n ;
	for (double i = 0.02; i <= 0.05; i += 0.01)
	{
		n = 10.0;
		cout << "��������Ϊ" << i << "ʱ�� ";
		for ( j = 1; n < 25; j++)
		{
			n = n * (1.0 + i);
		}
		cout << j<< "���º�ɵ���25�ڡ�" << endl;
	}
	return 0;
}