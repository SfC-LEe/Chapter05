/*
FileName : T5_10.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/
#include<iostream>
using namespace std;
int main()
{
	cout << "����\t" << "�׳�\t\n";
	for (int i = 1; i <= 5; i++)
	{
		int j=1;//j����i�Ľ׳� ��
		for (int i1 = i; i1 > 0; i1--)
		{
			j *= i1;
		}
		cout << i << "\t" << j << "\t\n";
	}
	return 0;
}
