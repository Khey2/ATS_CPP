/*
    Ejercicio 4:

    Escribe la siguiente expresion
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    float a,b,c,d,res;

    cout<<"Digita el valor de a: "<<endl;
    cin>>a;
    cout<<"Digita el valor de b: "<<endl;
    cin>>b;
    cout<<"Digita el valor de c: "<<endl;
    cin>>c;
    cout<<"Digita el valor de d: "<<endl;
    cin>>d;

    res = a + ( b / (c-d));

    cout<<endl<<"El resultado es: "<<res<<endl;

    getch();
    return 0;
}