/*
FileName : T5_16.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int amount, principal = 100000;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	for (int i = 1; i <= 10; i++)
	{
		amount = principal *( (double)pow(1.05, i));
		cout << setw(4)<< setfill(' ') << i << setw(21)<< setfill(' ') << amount / 100 << ".";
		cout<< setw(2) << setfill('0') << amount % 100 << endl;
	}
	return 0;
}
