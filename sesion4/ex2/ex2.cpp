/*
    Ejercicio 2:

    Realice un pograma que lea de la entrada estandar numeros hasta que se inroduza un 0

    cuando se ponga 0, MOSTRAR EL NUMEROD E VALORES MAYORES A 0 LEIDOS ( 10/ 10)
*/

#include<iostream>
#include<conio.h>

using namespace std;


int main()
{   
    int n, mayores = 0;

    while( n != 0){
        cout<<endl<<"Ingresa tu numero: ";
        cin>>n;

        if(n > 0){
            mayores++;
        }
    }

    cout<<"La cantidad de numeros mayores a 0 es de = "<<mayores;


    getch();
    return 0;
}