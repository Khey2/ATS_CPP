/*
    Escribe la expresion en c++
    hecho 10/10 sin ayuda


    redondeos a 2 decimales: cout.precision(2); agarra 2 numero y redondea a 1
 */
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b, exp;

    cout<<"Digita la variable a: "<<endl;
    cin>>a;

    cout<<"Digita la variable b: "<<endl;
    cin>>b;

    exp = (a/b) + 1;

    cout.precision(3); //define la precicion de la salida a 2 decimales
    cout<<endl<<"El resultado es: "<<exp<<endl;
    getch();

    return 0;
}