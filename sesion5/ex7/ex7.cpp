/*
    Ejercicio 7:

    Realiza un programa que defina DOS vectores de caracteres y despues
    ALMACENE el contenido de ambos vectores en un nuevo vector, situando
    en primer lugar LOS ELEMENTOS del primer vector seguido por los elementos del segundo vector.


    muestre el contenido del nuevo VECTOR en la salida estandar
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n1,n2;
    char vector1[100], vectorFinal[100];

    cout<<"Que cantidad de caracteres tendra tu PRIMER vector ";
    cin>>n1;

    cout<<"Que cantidad de caracteres tendra tu SEGUNDO vector ";
    cin>>n2;

    //vector 1
    int x = 0;
    for (int i = 0; i < n1; i++)
    {
        cout<<"Ingresa el valor del PRIMER VECTOR indice "<<i<<" ";
        cin>>vectorFinal[i];
        x++;
    }
    //vector 1
    for (x = n1  ; x < n1+n2; x++)
    {
        cout<<"Ingresa el valor del SEGUNDO VECTOR indice "<<x<<" ";
        cin>>vectorFinal[x];
    }

    for (int i = 0; i < x; i++)
    {
        cout<<"Indice "<<i<< " -> "<<vectorFinal[i]<<endl;
    }
    


    

    getch();
    return 0;
}