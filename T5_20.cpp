/*
FileName : T5_20.cpp
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
	for (int i = 1; i <= 500; i++)
	{
		for (int j = i; j <= 500; j++)
		{
			for (int k = j; k <= 500; k++)
			{
				if(i*i+j*j==k*k)
					{cout<<i<<" "<<j<<" "<<k<<endl;}
			}
		}
	}
	return 0;
}
