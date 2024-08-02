/*
    Ejercicio 8

    Escribe un programa que lea de la entrada estandar 2 catetos de un triangulo
    y escriba en la salida estandar la hipotenusa

*/

#include<iostream>
#include<conio.h>
#include<cmath> // libreria para calculos matematicos

using namespace std;

int main()
{
    float l1,l2,h;

    cout<<"Escribe el valor del lado 1: "<<endl;
    cin>>l1;
    cout<<"Escribe el valor del lado 2: "<<endl;
    cin>>l2;

    h = sqrt( (pow(l1, 2)) + (pow(l2, 2)) ); // pow eleva a N cantidad un numero

    cout<<"La hipotenusa del triangulo es de: "<<h<<endl;

    getch();
    return 0;
}