/*
    Ejericio 9:

        Cambiar un numero con el mismo valor pero en romanos

        M = 1000
        D = 500
        C = 100
        L = 50
        X = 10
        V = 5
        I = 1

        muy jodido XD

 */


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int numero, unidades, decenas, centenas, miles;
 

    cout<<"Ingresa tu numero: "; // 1920
    cin>>numero;

    unidades = numero%10; numero /= 10;
    decenas = numero%10; numero /= 10;
    centenas = numero%10; numero/=10;
    miles = numero%10; numero /= 10;

    switch(millar)
    {


    }


    getch();
    return 0;
}