/*
    Ejercicio 14:

    En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero
    de:

    A) Alumnos que aprobaron TODOS los examenes
    B) Alumnos que aprobaron al menos une xamen:
    C) Alumnos que aprobaron unicamente el ultimo examen;

    calculalo ( HECHO )

*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    float examen1, examen2, examen3;
    int aprobadosTodos = 0, aprobadoUno=0, aprobadosUltimo =0;

    for (int i = 1; i <= 5; i++)
    {
        cout<<i<<" Digita la nota del examen 1: "; cin>>examen1;
        cout<<i<<" Digita la nota del examen 2: "; cin>>examen2;
        cout<<i<<" Digita la nota del examen 3: "; cin>>examen3;

        if( (examen1 > 5) && (examen2 > 5) && (examen3 > 5) ){
            aprobadosTodos++;
        }   

        if( (examen1 > 5) || (examen2 > 5) || (examen3 > 5) ){
            aprobadoUno++;
        }
        if( (examen1 <= 5 ) && (examen2 <= 5) && (examen3 > 5) ){
            aprobadosUltimo++;
        }
    }

    cout<<" Alumnos que aprobaron todos los examenes"<<aprobadosTodos<<endl;
    cout<<" Alumnos que aprobaron SOLO EL ULTIMO EXAMEN "<<aprobadosUltimo<<endl;
    cout<<" Alumnos que aprobaron almenos un examen "<<aprobadoUno<<endl;
    
}