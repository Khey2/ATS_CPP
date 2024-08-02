/*
    Ejercicio 9:

    Escribe un programa que calcule el valor de un factoria ( 1*2*3*4*5*6)

    ( 10 / 10 )
 */


#include<iostream>
#include<conio.h>


using namespace std;


int main()
{
    int n, suma = 1;

    cout<<"Digita el numero n a calcular su factorial: ";
    cin>>n;

    for (int i = 1; i <= n; i++){

        suma *= i;
        cout<<suma<<endl;
    }

    cout<<"El factorial de tu numero es: "<<suma;
    

    getch();
    return 0;
}