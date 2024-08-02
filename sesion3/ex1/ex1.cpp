/*
    Escribe un  programa que lea 2 numeros y determina cual de ellos es amyor
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main()
{   
    int a,b;

    cout<<"digita el valor de a: "<<endl;
    cin>>a;
    cout<<"digita el valor de b: "<<endl;
    cin>>b;

    if(a < b){
        cout<<"b ES mayor que a: "<<b<<endl;
    }  else if( a > b){
        cout<<"A es mayor que b: "<<a<<endl;
    } else{
        cout<< "AMBOS SON IGUALES";
    }


    getch();
    return 0;
}