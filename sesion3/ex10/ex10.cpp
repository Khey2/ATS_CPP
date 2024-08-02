/*
    10 mostrar los meses de los años pidiendole al usuario un nuemro del 1 - 12
    y ,ostrar el ems que corresponde

 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    int n;

    cout<<" Ingresa un numero entre 1 y 12: ";
    cin>>n;

    switch(n)
    {
        case 1: cout<< "Enero";break;
        case 2: cout<< "Febrero";break;
        case 3: cout<< "Marzo";break;
        case 4: cout<< "Abril";break;
        case 5: cout<< "Mayo";break;
        case 6: cout<< "Junio";break;
        case 7: cout<< "Julio";break;
        case 8: cout<< "Agosto";break;
        case 9: cout<< "Septiembre";break;
        case 10: cout<< "Octubre";break;
        case 11: cout<< "Noviembre";break;
        case 12: cout<< "Diciembre";break;
        default: cout<< "NO valido"; break;
    }


    getch();
    return 0;
}