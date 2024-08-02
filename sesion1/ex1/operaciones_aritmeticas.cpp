/*
    1.- Escribe un programa que lea de la entrada estandar
    dos numeros y muestre en la salida esnatndar su suma, resta, multiplicacion y division

    10/10 sin ayuda
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    float n1, n2;

    cout<<"Digita el primer numero: ";
    cin>>n1;
    cout<<"Digita el segundo numero: ";
    cin>>n2;

    cout<<endl<<endl<<"La suma es de: "<<n1+n2;
    cout<<endl<<endl<<"La resta es de: "<<n1-n2;
    cout<<endl<<endl<<"La multiplicacion es de: "<<n1*n2;
    cout<<endl<<endl<<"La division es de: "<<n1/n2;

    getch();
}