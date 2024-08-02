/*
    Ejercicio 7:

        Escribe un programa que calcule el valor de 1+2+3+4+5.....+n

*/

#include<iostream>
#include<conio.h>


using namespace std;


int main()
{   
    int n, suma = 0;

    cout<<"Ingresa el valor de n: ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        suma += i;
    }

    cout<<"La suma total es de: "<<suma;
    


    getch();
    return 0;
}