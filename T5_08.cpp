/*
FileName : T5_08.cpp
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
	const int INF = 0x7fffffff;//定义int型无穷大常量。
	cout << "请输入您要输入整数数字的个数： " << endl;
	int n,min=INF,num;
	cin >> n;
	cout << "请依次输入整数： " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num < min) { min = num; }
	}
	cout << "最小整数为： " << min << endl;
	return 0;
}
