/*
    La calificacion final de un estudiante es el promedio
    de 3 notas

    1.- la nota de practicas que cuenta un 30% del total

    2.- la nota teoria que cuenta un 60% 

    3.- la nota de participacion que cuenta el 10% restante


    escribe el programa que lea las 3 notas y escribe la nota finak
*/


#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    float n1,n2,n3,c;

    cout<<"Ingresa la calificacion 1: "<<endl;
    cin>>n1;
    cout<<"Ingresa la calificacion 2: "<<endl;
    cin>>n2;
    cout<<"Ingresa la calificacion 3: "<<endl;
    cin>>n3;

    c = ((n1*0.30) + (n2*0.60) + (n3*0.10));

    cout.precision(3);
    cout<<"El resultado del alumno ( calificacion final ) es de: "<<c<<endl;
    

    getch();
    return 0;
}