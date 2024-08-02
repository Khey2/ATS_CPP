/*
    Ejercicio 6:

    Escribe un programa que defina un VECTOR de numeros y 
    calcule si existe algun numero en el vector
    cuyo valor equivale a la suma del resto de numeros
    del vector.
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int numeros[] = { 2, 4, 23 , 5, 6, 7 }, mayor = 0, suma = 0;

    for (int i = 0; i < 6; i++)
    {
        if( numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    
    //mike: esto esta bien, pero es mejorable
    // for (int i = 0; i < 6; i++)
    // {
    //     if( numeros[i] != mayor ){
    //         suma += numeros[i];
    //     }
    // }
    
    // if( suma == mayor ){
    //     cout<<"El numero "<<mayor<<" es el resultado de la suma de los demas numeros del vector ";
    // }else{
    //     cout<<"el numero "<<mayor<<" NO s la suma de los demas :)";
    // }

    //profesor:
    if( mayor == suma -mayor){
        cout<<"El numero "<<mayor<<" Equivale a la suma de todos los demas ";
    }else{
        cout<<"No es la suma de los demas tu numero "<<mayor;
    }

    getch();
    return 0;   
}