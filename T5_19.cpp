/*
FileName : T5_19.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double PI=0,a;
	for(int i=1;i<=1000;i++)
	{	cout<<i<<"\t";
		a=pow(-1,i+1)*4.0/(i*2-1);
		PI+=a;
		cout<<PI<<endl;
	}
	return 0;
}

