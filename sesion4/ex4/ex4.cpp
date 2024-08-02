/*
    Ejercicio 4:

    Escribe un prorama que tome cada 4 horas la temnperatura exteruior

    leyendola durante un periodo de 24 horas

    es decir, debe leer 6 temperaturas

    calcule la tenperatura media del dia, la tenperatura mas alta y mas baja.

    ( HECHO )
*/

#include<iostream>
#include<conio.h>
// #include<cmath>


using namespace std;

int main(){
    float temp_total = 0, temperatura_exterior = 0 , media, temp_alta = 0, temp_baja = 100000, hora = 0;


    int i = 1;
    while( hora != 24 ){

        cout<<"Ingresa la temperatura numero "<<i<<": "<<endl;
        cin>>temperatura_exterior;

        temp_total+=temperatura_exterior;
        i++;
        hora+=4;

        if( temperatura_exterior > temp_alta ){
            temp_alta = temperatura_exterior;
        }
        if(temperatura_exterior < temp_baja ){
            temp_baja = temperatura_exterior;
        }


    }   

    cout<<"La temperatura media es de: "<<(temp_total / 6 )<<endl;
    cout<<"La temperatura MAS ALTA es de: "<<( temp_alta )<<endl;
    cout<<"La temperatura MAS BAJA es de: "<<( temp_baja  )<<endl;

    getch();
    return 0;
}