/*
    Ejercicio 1:

    Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas
    y columnas, Posteriormente mostrar la matriz en pantalla

*/

#include<iostream>
#include<conio.h>
#include<random>


using namespace std;


int main(){
    int numeros[100][100] = {};
    int f, c;

    cout<<"Ingresa el numero de filas ";
    cin>>f;

    cout<<"Ingresa el numero de COLUMNAS ";
    cin>>c;


    numeros[f][c];

    for (int i = 0; i < f; i++)
    {
        cout<<"\n";
        cout<<i<<": \t";
        for (int x = 0; x < c; x++)
        {
            random_device rd;
            mt19937 gen(rd());

            uniform_int_distribution<> distrib(1, 100); 

            int random_number = distrib(gen);
            numeros[i][c] = random_number;

           cout<<i<< " -> "<<x<<" : "<<numeros[i][c]<<" \t";
        }
        
    }

    getch();
    return 0;
}