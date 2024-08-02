/*
    Ejercicio 6:

        Escribe un program,a que lea de la entrada estandar un caracter e indique
        en la salida si el caracter es una vocal minuscula o Mayusclua o no es vocval

        10/10

 */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char letter;

    cout<<"Digita tu letra: ";
    cin>>letter;

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Tu letra es una vfocal minuscula "; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':cout<<"Tu letra es una VOCAL MAYUSCULA =)"; break;
        default: cout<<"Tu letra no es una vocal"; break;
    }


    getch();
    return 0;
}
