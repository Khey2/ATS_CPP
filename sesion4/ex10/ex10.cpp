/*
    Ejercicio 10:

    Escribe un programa que calcule el calor de 1! + 2! + 3! ... +n!

    ( suma de factoriales ) ( 10 / 10 )
*/
#include<iostream>
#include<conio.h>


using namespace std;


int main()
{
    int n, suma = 1, sumaTotal = 0;

    cout<<"Digita el numero DE N  factoriales a sumar: ";
    cin>>n;

    for (int i = 1; i <= n; i++){

        suma *= i;
        sumaTotal += suma;
    }

    cout<<"El factorial de tu numero es: "<<sumaTotal;
    
    getch();
    return 0;
}