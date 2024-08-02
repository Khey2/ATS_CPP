/*
    Ejercicio 2:

    escribe un programa que lea 3 numeros y determine cual de ellos es mayor
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"digita el valor de a: "<<endl;
    cin>>a;
    cout<<"digita el valor de b: "<<endl;
    cin>>b;
    cout<<"digita el valor de c: "<<endl;
    cin>>c;

    if( a > b && a > c){
        cout<<endl<<"A es el numero mayor: "<<a<<endl;
    }else if( b > a && b > c ){
        cout<<endl<<"B es el numero mayor: "<<b<<endl;
    }else if( c > a && c > b ){
        cout<<endl<<"C es el numero mayor: "<<c<<endl;
    }else{
        cout<<"TODOS SON IGUALES";
    }

    getch();
    return 0;
}