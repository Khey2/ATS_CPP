/*
    Ejercicio 6>

    Escribe un programa que calcule x elevado a la y donde 
    X and Y con enteros positivos SIN utilizar la funcion POW 

    KHAAAAA

    ( HECHO )
*/

#include<iostream>
#include<conio.h>


using namespace std;


int main(){

    int x, y, total;

    cout<<"Ingresa el valor de X: ";
    cin>>x;

    cout<<endl<<"Ingresa el valor de Y: ";
    cin>>y;

    total = x;
    for( int i = 1; i < y; i++ ){
        total *= x;
    }

    cout<<"X elevado es igual a : "<<total;

    getch();
    return 0;
}