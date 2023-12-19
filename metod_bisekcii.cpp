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
float a,b,x,a1,b1;
int main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"Введите начало и конец отрезка на котором содержится корень:";
    cin>>a>>b;
    a1=a;
    b1=b;
    while (abs(a-b)>=epsilon){
        x = (a+b)/2;
        if ((sqrt(1-0.4*pow(x, 2))-asin(x))*(sqrt(1-0.4*pow(a, 2))-asin(a))<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
    }
    cout<<"Приближенный корень уравнения на отрезке ["<<a1<<";"<<b1<<"]: ";
    cout<<x;
    return 0;
}
