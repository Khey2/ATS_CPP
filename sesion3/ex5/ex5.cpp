/*
    Ejercicio 5:

    Escribe un progrtama que lea de lka entrada estandar
    un caractern e indique en salida estamndar sine suna vocal o no
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char letter;

    cout<<"Digita una letra: "<<endl;
    cin>>letter;

    switch (letter)
    {
    case 'a':    
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u':cout<<letter<<" Es una vocal =)"<<endl;
    break;
    
    default:
    cout<<letter<<" NO ES UNA VOCAL"<<endl;
        break;
    }

    getch();
    return 0;
}