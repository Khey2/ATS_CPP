/*
    Ejercicio 1:

    Escribe un programa que DEFINA un vector de numers y calcule la suma de sus elementos
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int suma = 0;
    int numeros[] = { 2, 2, 5, 5, 8, 9, 12 };

    for (int num : numeros ) // forma de c++ v11 para sacar datos
    {
        cout<< num << endl;
        suma += num;
    }

    cout<<"La suma del vector es de : "<<suma;
    

    getch();
    return 0;
}