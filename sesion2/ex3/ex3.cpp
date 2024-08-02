/*
    Ejercicio 3: escribe la expresion matematica
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b,c,d,e,f,res;

    cout<<"Digita la variabl a"<<endl;
    cin>>a;
    cout<<"Digita la variabl b"<<endl;
    cin>>b;
    cout<<"Digita la variabl c"<<endl;
    cin>>c;
    cout<<"Digita la variabl d"<<endl;
    cin>>d;
    cout<<"Digita la variabl e"<<endl;
    cin>>e;
    cout<<"Digita la variabl f"<<endl;
    cin>>f;

    res = (a + (b/c)) / ( d + (e/f));

    cout<<endl<<"El resultado de la expresion es: "<<res;

    getch();
    return 0;
}