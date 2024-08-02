/*
    Ejercicio 11: Hacer un programa que simule un cajero automatico, con un saldo inicial de 1000 dolares
    10/10
 */

#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    float saldo = 100,  n;
    int opc;

    cout<<"Bienvenido al banco, digita una opcion  \n\n1.- depositar, \n\n2.- Sacar dinero, \n\n3.- salir) "<<endl;
    cin>>opc;

    switch( opc )
    {
        case 1:
            cout<<"¿Que cantidad de dinero quieres depositar?"<<endl;
            cin>>n;

            cout<<endl<<"Tu nuevo saldo es de: "<<( saldo += n ); break;


        case 2:
            cout<<"¿Que cantidad de dinero quieres Sacar?"<<endl;
            cin>>n;

            if( n > saldo ){
                cout<<endl<<"Accion invalida, saliendo del programa "; break;
            }else{
                cout<<endl<<"Tu nuevo saldo es de: "<<( saldo -= n ); break;
            }


        case 3: cout<<"Saliendo del programa =)"; break;

        default: cout<<"Invalido, saliendod el programa "; break;
    }


    getch();
    return 0;
}