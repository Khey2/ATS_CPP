/*
    Realice un programa que calcule el valor que toma la siguiente
    funcion para cvalores dados x e y:
*/

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
    float x,y,res;

    cout<<"Digita el valor de x: ";
    cin>>x;
    cout<<"Digita el valor de y: ";
    cin>>y;

    res = ( sqrt(x) ) / ( pow(y,2) - 1 );

    cout<<"El resultado es: "<<res;
    

    getch();
    return 0;
}