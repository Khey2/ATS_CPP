/*
    Ejercicio 3:

    Realice un programa que lea de la entrada estandar los siguientes datos
    de una persona

        EDAD (entero )
        Sexo: ( caracter )
        Altura: ( float )

        despues de leerlos, mostrarlso en la salida estandar

        10/10 sin ayuda
 */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int edad;
    char sexo[10];//defines cuantas letras pueden ingresar...es un array por dentro
    float altura;

    cout<<"Digita tu edad: ";
    cin>>edad;

    cout<<endl<<"Digita su sexco (M/F)";
    cin>>sexo;

    cout<<endl<<"¿Cuantos mides? :";
    cin>>altura;

    cout<<"- Edad: "<<edad<<endl;
    cout<<"- Sexo: "<<sexo<<endl;
    cout<<"- Altura: "<<altura<<endl;

    getch();
}