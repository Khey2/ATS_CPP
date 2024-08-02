/*
    Escribe la expresion
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{   
    int a,b, c;

    cout<<"Ingresa a: "<<endl;
    cin>>a;

    cout<<"Ingresa b: "<<endl;
    cin>>b;

    cout<<"SWITCH"<<endl;

    c = b; // 10
    b = a; // 10
    a = c; // 10

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;



    getch();
    return 0;
}