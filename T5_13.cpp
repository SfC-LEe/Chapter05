/*
FileName : T5_13.cpp
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
	int num;
	cout << "����������5������(1~30֮�������)����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}
