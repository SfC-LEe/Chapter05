/*
FileName : T5_09.cpp
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
	int c=1;
	for (int i = 1; i <= 15; i += 2)
	{
		c *= i;
	}
	cout << "1��15�������ĳ˻�Ϊ�� " << c << endl;
	return 0;
}
