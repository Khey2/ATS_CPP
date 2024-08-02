/*
    Ejercicio 8:

    Realiza un programa QUE calcule el producto de DOS matrices cuadradas de 3x3

 */
#include<iostream>
#include<conio.h>


using namespace std;


int main(){

    int matriz[3][3] = { 2, 4, 5,  7,8,6,  9,1,1};
    int matriz2[3][3] = { 4, 2, 9,  9,9,9,  1,2,2};

    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int x = 0; x < 3; x++)
        {
            cout<<(matriz[i][x] * matriz2[i][x])<<" ";
        }
    }
    
    

    getch();
    return 0;
}