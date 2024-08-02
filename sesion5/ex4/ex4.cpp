/*
    Ejercicio 4:

    Escribe un programa que defina un VECTOR de numeros y muestre
    en la salida estandar el VECTOR en orden inverso - del ultimo al primer
    elemento. ( HECHO )
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[100], n;

    cout<<"Digita la cantidad de numeros de tu vector ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Digita el numero del indice: "<<i<<" ";
        cin>>numeros[i];
    }

    for (int x = n -1; x >= 0; x--)
    {   
        cout<<"Indice "<<x<<" -> "<<numeros[x]<<endl;
    }
    
    


    getch();
    return 0;
}