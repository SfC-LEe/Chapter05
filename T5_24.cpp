/*
FileName : T5_24.cpp
Author   : Guo Yu Li
E-mail   : 1223214046@qq.com
Date     : Mar 6th,2022
College  : School of Computer Science and Information Engineering
Function : Homework

*/#include<iostream>
using namespace std;
int main()
{
	cout << "����������1~19֮���һ�������� ";
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i <= num/2+1)
		{
			for (int j = 1; j <= num; j++)
			{
				if (i + j <( num/2+2)) { cout << " "; }
				else if (i + j == (num/2+2))
				{
					for (int k = 1; k <= 2 * i - 1; k++)
					{
						cout << "*";
						j++;
					}
				}
				else { cout << " "; }
			}
		}
		else
		{
			for (int j = 1; j <= num; j++)
			{
				if (i - j > (num/2)) { cout << " "; }
				else if (i - j == (num/2))
				{
					for (int k = 1; k <= (num - i) * 2 + 1; k++)
					{
						cout << "*";
						j++;
					}
				}
				else { cout << " "; }
			}
		}
		cout << endl;
	}
	return 0;
}