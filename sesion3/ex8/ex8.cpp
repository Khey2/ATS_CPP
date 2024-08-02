/*
    eJERCICIO 8:

    Escribe un programa que ela de la entrada estandar 3 numeros

    desoues debe leer un cuartoi numero e indicar si el numero coincide con algunos de los itnroducidos anteriormente

 */


#include<iostream>
#include<conio.h>


using namespace std;


int main()
{   
    int n1,n2,n3,n4;

    cout<<"Digita el primer numero: ";
    cin>>n1;
    cout<<"Digita el segundo numero: ";
    cin>>n2;
    cout<<"Digita el tercer numero: ";
    cin>>n3;
    cout<<"Digita el numero QUE deseas evaluar con los anteriores: ";
    cin>>n4;

    if( n4 == n1 || n4 == n2 || n4 == n3 ){
        cout<<"El numero COINCIDE copn el introducido anteriormente";
    }else{
        cout<<"El numero no coincide =)";
    }


    getch();
    return 0;
}
