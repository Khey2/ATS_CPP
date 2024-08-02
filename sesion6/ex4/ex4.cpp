/*
    Ejercicio 4:

    Hacer una matriz preguntando AL USUARIO el numero de filas
    y columnas, LLENAR numeros aleatorios, copiar el contenido a otra matriz y por ultmo mostrarla en pantalla

*/

#include<iostream>
#include<conio.h>
#include<random>


using namespace std;


int main(){
    int numeros[100][100];
    int matriz2[100][100];
    int f, c;


    cout<<"Ingresa la cantidad de FILAS: ";
    cin>>f;

    cout<<"Ingresa la cantidad de COLUMNAS: ";
    cin>>c;

    numeros[f][c];

    for (int i = 0; i < f; i++)
    { 
        cout<<endl;
        for (int x = 0; x < c; x++)
        {
            random_device rd;
            std::mt19937 gen(rd());

            // Define el rango de números aleatorios
            std::uniform_int_distribution<> distrib(1, 100); // Números aleatorios entre 1 y 100

            // Genera y muestra un número aleatorio
            int random_number = distrib(gen);

            numeros[i][x] = random_number;
            matriz2[i][x] = numeros[i][x];
            cout<<matriz2[i][x]<<" ";
        }
    }
    

    getch();
    return 0;
}