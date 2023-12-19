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
float x,a,b,a1;
double f(double x) {
    return (sqrt(1 - 0.4 * pow(x, 2)) - asin(x));
}
double vir(double x) {
    return (sin(sqrt(1 - 0.4 * pow(x, 2))));
}
double diff(double x) {
    return (-(2*x*cos(sqrt((5-2*pow(x, 2))/sqrt(5)))/(sqrt(5)*sqrt(5-2*pow(x, 2)))));
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите начало и конец отрезка на котором содержится корень:";
    cin >> a >> b;
    a1=a;
    x=(a+b)/2;
    if (abs(diff(x))<1){
        while(abs(x-a)>epsilon){
            a=x;
            x=vir(x);
        }
        cout << "Приближенный корень уравнения на отрезке [" << a1 << ";" << b << "]: "<<x;

    }
    else
        cout<<"Данная функция не подходит для решения этим методом";
    return 0;
}
