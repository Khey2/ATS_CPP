/*
    EJERICIO 7: Escribe un programa que SOLICITE una edad ( INT ) e indique
    si la edad introducida esta en el ranfo de 18-25
    10/10
 */


#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    int edad;

    cout<<" Ingresa tu edad: ";
    cin>>edad;

    if( edad >= 18 && edad <=25 ){
        cout<<endl<<"Tu edad estan en el rango de [18-25]";
    }else{
         cout<<endl<<"Tu edad NO ESTA EN EL RANGO";
    }


    getch();
    return 0;
}