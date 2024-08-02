/*
    Ejercicio 4:
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;

    cout<<"Digita un numero: "<<endl;
    cin>>n;

    if( n < 0){
        cout<<n<<" Es un numero negativo";
    }else if( n > 0){
        cout<<n<<" Es un numero positibo";
    }else{
        cout<<n<<" Es 0";
    }

    getch();
    return 0;
}