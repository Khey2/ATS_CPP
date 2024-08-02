/*
    Ejercicio 16:

    Realiza un programa que calcule la descomposicion en factores primos de un numero

    lo entendi



*/


#include<iostream>
#include<conio.h>


using namespace std;

int main(){

    int n;

    cout<<" Ingresa tu numero: ";
    cin>>n;
    //! analizando
    // se busca que i valga 2 debido a que es el primo minimo.. de ahi mientras N no sea 1, seguira iterandose y aumentando
    // el valor del primo, dentrodse hace otro bucle que imprme el primo actual
    // entonces mientras que el numero que ingresaste se pueda dividir entre i ( el primo )
    // se seguira imprimiendo dicho primo
    // una vez esto deje de ser valido, el primos e aumentara hasta que el numero ACTUAL se pueda debidir y aparte 
    // el numero no sea 1, ( al final de cada iteracion el numero se divide entre el primo y se asigna)
    for (int i = 2; n > 1; i++)
    {
       while ( n%i == 0 )
       {
            cout<<i<<" ";
            n /= i;
       }
       
    }
    
    
    
    

    getch();
    return 0;
}