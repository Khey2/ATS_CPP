/*
    Ejercicio 7:

    Desarrollar un progrma que DETERMINE si una matriz es simetrica o no.

    UNA MATRIZ es simetrica si es cuadrada y si es igual a su matriz transpuesta.

    |8  1  3|          |8  1  3| 
    |1  7  4|   -->    |1  7  4|
    |2  4  2|          |2  4  2|

    ( es aque en donde si cambias filas por columnas... es la misma...)

*/
#include<iostream>
#include<conio.h>


using namespace std;


int main(){
    int matriz[3][3] = { 8,1,3  ,1,7,4,   2,4,2 };
    int matriz2[3][3] = {};


    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            matriz2[x][i] = matriz[i][x];
            if( matriz[i][x] != matriz2[x][i] ){
                cout<<"LA MATRIZ NO ES SIMETRICA =) ";
                return 0;
            }
        }

    }
            cout<<"LA MATRIZ ES SIMETRICA ";
    
    

    getch();
    return 0;
}