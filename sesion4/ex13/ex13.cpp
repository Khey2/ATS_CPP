/*
    Ejercicio 13: Haz un programa con la serie de fobonaci

    1, 1, 2, 3, 5, 8, 13, ....., n

    no pude, complicado un poco
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int n, x = 0, y = 1, z = 1;

    cout<<"La serie de fobonacci, cuantos numeros calcularas???: ";
    cin>>n;

    //! NO pude
    cout<<" 1 ";
    for (int i = 0; i <= n; i++)
    {      
        //analizandolo
        //
        z = x + y; // 0+1 = 1, 2, 3
        cout<<z<<" ";
        x = y; // 1 1
        y = z; // 1 2
    }
    


    getch();
    return 0;
}