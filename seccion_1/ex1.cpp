#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char name[] = "Miguel";
    char name2[] = { 'M', 'i', 'g', 'u', 'e', 'l' };
    char nombre[30];

    cout<<name<<endl;
    cout<<name2<<endl;

    cout<<"Digita tu nombre"<<endl;
    //cin>>nombre; // se come los espacios. por eso no se usa CIN en cpp, porque con un espacio se termina todo
    //gets almacena TODA LA CXADENA COMPLETA ignorando la cantidad de espacios
    //definidos, gets se adueña espacios de memoria que no le pertenecen para guardar
    //data extra.

    //cin.getline: la mejor forma de guardar cadenas del usuario
    // variable, espacios en memoria, cuando termina?
    cin.getline(nombre, 10, '\n' );
    cout<<nombre<<endl;



    getch();
    return 0;
}