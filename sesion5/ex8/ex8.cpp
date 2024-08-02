/*
    Ejercicio 8:

    Hacer un programa que lea 5 numeros en un arreglo,
    los copie a otro arreglo multiplicados por 2 y muestre
    el segundo arreglo
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int numeros[] = { 2, 3, 4, 5, 6};
    int numerosMult[5];

    for (int i = 0; i < 5; i++)
    {
        numerosMult[i] = numeros[i] * 2;
        cout<<numerosMult[i]<<endl;
    }

    
    

    getch();
    return 0;
}