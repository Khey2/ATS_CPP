/*
    Ejercicio 2:

    Escribe la siguiente expresion matematica en c++

    (10/10) sin ayuda
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b,c,d, res;

    cout<<"Digita la variable a: "<<endl;
    cin>>a;
    cout<<"Digita la variable b: "<<endl;
    cin>>b;
    cout<<"Digita la variable c: "<<endl;
    cin>>c;
    cout<<"Digita la variable d: "<<endl;
    cin>>d;

    res = (a+b) / (c+d);

    cout<<"El resultado es: "<<res<<endl;



    getch();
    return 0;
}