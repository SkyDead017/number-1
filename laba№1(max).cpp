#include <iostream>
#include <stdlib.h>
const int n = 10;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int a[n], max, nom = 0, k = 1;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << endl;
    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            nom = i + 1;
            k = 1;
        }
        else if (a[i] == max)
        {
            k++;
        }
    }
    cout << "Максимальный элемент = " << max << endl;
    cout << "Номер максимального элемента = " << nom << endl;
    cout << "Количество максимальных элементов = " << k << endl;
    return 0;
}