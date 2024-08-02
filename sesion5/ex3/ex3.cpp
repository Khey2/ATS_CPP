/*
    Ejercicio 3:

    Escribe un programa que lea de la entrada estandar UN VECTOR de numeros y muestre en la salida
    estandar los numeros del vector con sus indices asociados
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int suma;
    int n, number;
    int numeros[ 100];

    cout<<"Digita la cantidad de numeros que tendra tu array/vector: ";
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        cout<<"Digita el numero de la posicion "<<i<<endl;
        cin>>numeros[i];
   
    }

    for (int i = 0; i < n; i++)
    {
        cout<<" Indice "<<i<< " = "<<numeros[i]<<endl;
    }
    
    

    getch();
    return 0;
}