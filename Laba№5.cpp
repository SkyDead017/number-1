#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	const int str = 3, stol = 3;
	int a2[str][stol];
	int example[str][stol] = {
		{3,4,5},
		{9,7,6},
		{18,31,8}
	};
	int a[str * stol * 2] = { 9,7,6, 3,4,5, 18,31,8, 4,7,31, 5,6,8, 3,9,18 };
	for (int i = 0; i < str * stol; i += stol)
		for (int j = str * stol; j < str * stol * 2; ++j)
		{
			if (a[i] == a[j])
			{
				int s = (j - str * stol) % str; //определяет строку
				for (int z = 0; z < stol; ++z)
					a2[s][z] = a[z + i]; //заполняет строку
			}
		}
	for (int i = 0; i < str; ++i)
	{
		for (int j = 0; j < stol; ++j)
			cout << a2[i][j] << "\t";
		cout << endl;
	}
	return 0;
}