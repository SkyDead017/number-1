/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	int z = 1;
	do {
		cout << "Введите N (N>3 и N - нечётное): ";
		cin >> N;
	} while (N <= 3 || N % 2 == 0);
	for (int i = 1; i <= (N+1)/2; ++i) {
		for (int j = 1; j <= (N + 1) / 2 - i; ++j) {
			cout << ' ';
		}
		for (int k = 1; k <= z; ++k) {
			cout << '*';
		}
		z += 2;
		cout << endl;
	}
	return 0;

}
