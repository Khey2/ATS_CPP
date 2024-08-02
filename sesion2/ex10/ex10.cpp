/*
    Ejercicio 10:

    calcula el programa que solucione las ecuaciones de segundo grado de la forma

    ax2 +bx+c = 0
*/

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c,res, res2;

    cout<<"Digita la variable a: "<<endl;
    cin>>a;
    cout<<"Digita la variable b: "<<endl;
    cin>>b;
    cout<<"Digita la variable c: "<<endl;
    cin>>c;

    res = (-b + ( sqrt( pow(b,2) - (4 * (a*c)) ))) / (2*a);
    res2 = (-b - ( sqrt( pow(b,2) - (4 * (a*c)) ))) / (2*a);

    cout<<"El resultado 1 es: "<<res<<endl;
    cout<<"El resultado 2 es: "<<res2<<endl;


    getch();
    return 0;
}