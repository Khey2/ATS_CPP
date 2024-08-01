/*
    Ejercicio 1:

    Hacer un programa que pida al usuario que digite 
    una cadena de caracteres, LUEGO, VERIFICAR LA LONGITUD
    de la cadena y si esta supera a 10 caracteres, 
    mostrarla en 
    pantalla, caso contrario no mostrarla
*/

#include<string.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(){

    char texto[30];
    char resp[30];

    cout<<"Digita la cadena que desees: ";
    cin.getline(texto, 30 , '\n');

    if(strlen(texto) > 10 ){
        cout<<texto<<endl;
    }else{
        cout<<"=("<<endl;
    }

    getch();
    return 0;
}