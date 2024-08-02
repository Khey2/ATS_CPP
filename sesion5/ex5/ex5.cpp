/*
    Ejercicio 5:

    Mayor elemento de un arreglo:

    Desarrolle unj programa que lea de la entrada estandar un VECTOR de 
    enteros y determine CUAL es el mayor
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[100], n, mayor = 0;

    cout<<"Digita la cantidad de numeros de tu vector ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Digita el numero del indice "<<i<<" ";
        cin>>numeros[i];
        if( numeros[i] > mayor ){
            mayor = numeros[i];
        }
    }

    cout<<"El mayor numerod e tu vector es: "<<mayor;

  
    
    

}