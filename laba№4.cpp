#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a[100];
    int k, n;
    int cnt = 0;
    int ch = 0;
    cout << "������� ������ ������� : ";
    cin >> n;
    cout << "������� ������ �������� (������ ������) : ";
    cin >> k;
    cout << "�������� ������: ";
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << endl << "���������������� ������ � ���� �������: ";
    for (int i = 0; i < n; ++i) {
        cout << a[k] << ' ';
        k--;
        if (k == -1) k = n - 1;
    }
    cout << endl << "������������� ������ �� ��������: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] < a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 != 0)
        {
            n--;
            for (int j = i; j < n; ++j)
            {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    if (k >= n) k = k % n;
    cout << endl << "���������� ������, � �-��� �������� �� �+1(��� �������� ���������): ";
    for (int i = 0; i < n; ++i) {
        cout << a[k] << ' ';
        k--;
        if (k == -1) k = n - 1;
    }
    return 0;
}