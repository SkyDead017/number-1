#include <iostream> 
#include <stdlib.h>
#include <clocale>
using namespace std;
int main()
{
    srand(time(0));
    int a[100];
    int n = 5;
    setlocale(LC_ALL, "Ru");
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++){
        a[i] = rand() % 10;
        cout << a[i] << ' ';
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            n++;
            for (int j = n; j >= i + 1; j--) {
                a[j] = a[j - 1];
            }
            a[i] = -1;
            i++;
        }
    }
    cout << endl<<"Массив с -1: ";
    for (int i = 0; i < n; i++)
        cout << a[i] <<' ';
    return 0;
}


