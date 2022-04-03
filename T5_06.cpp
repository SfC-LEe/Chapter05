/*
FileName : T5_06.cpp
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
	int num = 0 ;
	double sum = 0.0,i = 0;
	cout << "程序将求输入整数的平均值，请依次输入整数（输入9999终止）" << endl;
	for (; ; i++)
	{
		cin >> num;
		if (num == 9999) { break; }
		sum += num;
	}
	cout << "平均数为： " << sum / i << endl;
	return 0;
}

