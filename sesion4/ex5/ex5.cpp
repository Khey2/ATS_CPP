/*
    Ejercicio 5:

        Escribe un programa que lea valores enteros hasta que se itnroduzca un valor entre [20-30]
        o se introduza el 0

        el programa DEBE ENTREGAR LA SUMA DE LOS VALORES MAYORES A 0 INTRODUCIDOS. 
    ( 10 / 10)
 */

#include<iostream>
#include<conio.h>


using namespace std;


int main()
{   
    int n = 8, suma = 0;
    int i = 1;

    do{
        cout<<"Introduce el numero "<<i<<" :";
        cin>>n;

        if( n > 0){
            suma += n;
        }
        i++;
  
    }while( ( n <= 20 || n >= 30) && n != 0 );

    cout<<"Fin del programa la suma es de: "<<suma;

    getch();
    return 0;
}