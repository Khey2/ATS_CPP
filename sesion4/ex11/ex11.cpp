/*
    Escribe un programa que calcule un LA SUMA

    en un numero elevado a la n cantidad de veces pow( 2, 1) + pow(2,2) +...... pow(2, n)

    10 / 10
*/

#include<iostream>
#include<conio.h>
#include<cmath>


using namespace std;

int main()
{
    int  x, suma = 0;


    cout<<"digita la cantidad de veces que elevas el 2: ";
    cin>>x;

    for (int i = 1; i <= x; i++){
        
        suma += pow( 2, i);
    }
     
    cout<<"La suma total es de: "<<suma;

    getch();
    return 0;
}