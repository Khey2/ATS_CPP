/*
    Ejercicio 8:

    Calcula un programa que calcule el calor de 
    1+3+5+....+2n-1
*/

#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
    int n, suma = 0;

    cout<<"Ingresa el valor de n: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        suma += (2*i) - 1;
        cout<<suma<<endl;
    }

    cout<<"La suma de impares es de: "<<suma;
    
    getch();
    return 0;
}