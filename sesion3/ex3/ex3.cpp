/*
    Realiza un programa que lea un valor enntero y determine si se trata de un numero par o impar
*/

#include<iostream>
#include<conio.h>


using namespace std;

int main()
{
    int n;

    cout<<"Ingresa tu numero: "<<endl;
    cin>>n;

    if( n%2 == 0){
        cout<<n<<" es un numero PAR"<<endl;
    }else{
        cout<<n<<" es un numero IMPAR"<<endl;
    }

    getch();
    return 0;
}