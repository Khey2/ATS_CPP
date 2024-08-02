/*
    Ejercicio 1:

    Escribe un programa que DEFINA un vector de numeros y calcule la MULTIPLICACION
    acumulada de sus elementos
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    int numero[] = { 1, 2, 3, 5 };
    int suma = 1;

    for (int i = 0 ; i < 4; i++)
    {
        suma *= numero[i];
    }

    cout<<" La multiplicacion de cada elemento de tu vector es de: "<<suma;
    

    getch();
    return 0;
}
