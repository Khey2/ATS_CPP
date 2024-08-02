/*
    Ejercicio 5

    Matriz transpuesta:

    Realiza un programa que LEA una amtriz de 3x3 y cree su matriz traspuesta
    . la matriz traspuesta es aquella en ka que la columna I esa la fila I de la matriz original

*/
#include<iostream>
#include<conio.h>


using namespace std;


int main(){
    int matriz[3][3] = { 2,3,6,  8,2,9,  7,1,2 };
    int matriz2[3][3];
    
    cout<<" matriz original: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int x = 0; x < 3; x++)
        {
           matriz2[i][x] = matriz[x][i];
           cout<<matriz[i][x]<<" ";
        }
    }

    cout<<endl<<" matriz TRANSPUESTA: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int x = 0; x < 3; x++)
        {
           cout<<matriz2[i][x]<<" ";
        }
    }
    

    getch();
    return 0;
}