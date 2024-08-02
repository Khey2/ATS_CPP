/*
    Ejercicio 2:

    Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
     muestre la diagonal principal de la matriz
     ( muestra [0][0]  [1][1]  [2][2] )
*/

#include<iostream>
#include<conio.h>


using namespace std;


int main(){
    int numeros[3][3] = { 4, 5, 6
                         ,1, 6, 0,     
                          3, 6, 9 };
    
    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < i; x++)
        {
           cout<<"\t";
        }
        
       cout<<numeros[i][i]<<endl;
    }
    

    getch();
    return 0;
}