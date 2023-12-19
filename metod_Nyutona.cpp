/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
const double epsilon = 0.000001;
float a, b, x0, x1;
double f(double x) {
    return (sqrt(1 - 0.4 * pow(x, 2)) - asin(x));
}
double f1(double x) {
    return (-0.4 * x / sqrt(1 - 0.4 * pow(x, 2))) - (1 / sqrt(1 - pow(x, 2)));
}
double f2(double x) {
    return (-(0.16 * pow(x, 2) / pow(sqrt(1 - 0.4 * pow(x, 2)), 3)) - (x / pow(sqrt(1 - pow(x, 2)), 3)) - (0.4 / sqrt(1 - 0.4 * pow(x, 2))));
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите начало и конец отрезка на котором содержится корень:";
    cin >> a >> b;
    if (f(a) * f2(a) > 0) {
        x0 = a;
    }
    else {
        if (f(b) * f2(b) > 0) {
            x0 = b;
        }
    }
    x1 = x0 - f(x0) / f1(x0);
    while (abs(x0 - x1) > epsilon) {
        x0 = x1;
        x1 = x0 - f(x0) / f1(x0);
    }
    cout << "Приближенный корень уравнения на отрезке [" << a << ";" << b << "]: "<<x1;
    return 0;
}
