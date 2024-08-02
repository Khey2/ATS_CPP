/*
    Escriba un programa que LEA de las 3 notas de un alumno y calcule su
    nota final MEDIA de dico alumno ( 10 / 10 )
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b,c,res;

    cout<<"Ingresa la nota 1"<<endl;
    cin>>a;
    cout<<"Ingresa la nota 2"<<endl;
    cin>>b;
    cout<<"Ingresa la nota 3"<<endl;
    cin>>c;

    res = (a + b + c) / 3; 

    cout.precision(3);
    cout<<"La Calificacion final es de : "<<res;

    getch();
    return 0;
}