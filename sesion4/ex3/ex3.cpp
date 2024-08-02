/*
    Ejercicio 3:

    Realice un programa que calcule y muestre en la salida estandar
    la suma de los cuadrados de los 10 primero enteros mayores a 0 10/10
*/

#include<iostream>
#include<conio.h>
#include<cmath>


using namespace std;

int main()
{
    int suma = 0;

    for(int i = 1; i <= 10; i++ ){
        suma += pow(i,2);
        cout<<suma<<endl;
    }

    cout<<"La suma de los 10 primeros cuadrados es de: "<<suma;

    getch();
    return 0;    
}