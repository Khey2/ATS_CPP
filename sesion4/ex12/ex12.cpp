/*
    Hz un programa que calcule el resultado de la siguiente expresion

    1 - 2 + 3- 4 + 5- 6 + 7.....n
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n, res = 0;

    cout<<"Cuantas veces deseas aplicar la formula?: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if( i%2 == 0){
            res -= i;
        }else{
            res += i;
        }
        
    }
    
    cout<<"La suma total es de : "<<res;

    getch();
    return 0;
}