/*
    Escribe un programa que lea de la entrada estandar
    el precio de un producto y muestre en la salida
    estandar el precio del producto al aplicarle el IVA

    10/10 sin ayuda
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    float productPrice;

    cout<<"Digita el precio de tu producto: ";
    cin>>productPrice;
    
    cout<<endl<<endl<<"El precio de tu producto ORIGINAL: "<<productPrice;
    cout<<endl<<endl<<"El precio de tu producto CON IVA: "<<productPrice*1.16;

    getch();
}