/*
    Ejercicio 1:

    Realize un programa que solicite un numeroi entero entre 1 y 10 
    y muestre en la salida estandar su tabla de multiplicar
*/

#include<iostream>
#include<conio.h>



using namespace std;

int main()
{   
    int n;

    cout<<"Ingresa el numero entre 1 y 10: ";
    cin>>n;

    if( n > 10 || n < 0){
        cout<<"Operacion invalida!, saliendo del programa ";
    }else{
        for(int i = 1; i <= 10 ; i++){
            cout<<n<<" X "<<i<<" = "<<( n*i )<<endl;
        }
    }

    getch();
    return 0;
}