/*
    Ejercicio 12:

    Hacer un programa que considere las siguientes opciones:

    caso 1: cubo de un numero

    caso 2: numero par o impar

    caso 3: salir


    10/10 
 */

#include<iostream>
#include<conio.h>
#include<cmath>


using namespace std;

int main()
{
    int opc;
    int num;

    cout<<" Elige una opcion: \n\n 1.- Cubo de un numero \n 2.- numero par o impar \n 3.- Salir "<<endl<<endl;
    cin>>opc;

    switch( opc ){

        case 1: 
            cout<<"CUBO DE UN NUMERO";
            cout<<" Ingresa el numero que quieres calcular: "<<endl;
            cin>>num;

            cout<<"Tu numero al cubo es de: "<<( pow( num, 3)  );
            break;
        case 2:
            cout<<"NUMERO IMPAR O PAR";
            cout<<" Ingresa el numero que quieres calcular: "<<endl;
            cin>>num;

            if( num %2 == 0){
                cout<<"Tu numero es par!!!";
            }else{
                 cout<<"Tu numero es IMPAR!!!";
            }

            break;

        case 3: cout<<" Saliendo... "; break;

        default: cout<<" Opcion invalida, saliendod el programa "; break;

    }


    getch();
    return 0;
}