/*
    Ejercicio 6:

    Realiza un programa que calcule la SUMA de dos matrices cuadradas de 3x3

*/
#include<iostream>
#include<conio.h>


using namespace std;


int main(){

    int matriz1[3][3] = { 2,5,7,  5,3,1,   9,8,7};
    int matriz2[3][3] = { 6,1,5,  1,2,9,   9,2,2};

    for (int i = 0; i < 3; i++)
    {   
        cout<<endl;
        for (int x = 0; x < 3; x++)
        {
            cout<<(matriz1[i][x] + matriz2[i][x])<<" ";
        }
        
    }
    


    getch();
    return 0;
}