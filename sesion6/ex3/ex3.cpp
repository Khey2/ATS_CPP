/*
    Ejercicio 3:

    Hacer una matriz de tipo ENTERA de 2 * 2, llenarla de NUMEROS y luego
    copiar todo su contenido hacia otra matriz.

*/
#include<iostream>
#include<conio.h>


using namespace std;


int main(){
    int matriz[2][2] = { 5, 6,
                         8, 9 };
    int matriz2[2][2];


    //filas
    for (int i = 0; i < 2; i++)
    {   
        cout<<"\n";
        //columnas
        for (int x = 0; x < 2; x++)
        {
            matriz2[i][x] = matriz[i][x];
            cout<<matriz2[i][x]<<"  ";
        }
    }
                             
    

    getch();
    return 0;
}