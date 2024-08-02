#include<iostream>
#include<conio.h>

using namespace std;

// definicion de la estructura
struct Persona{
	char nombre[20]; // campo de la estructura
	int edad; // campo de la estructura
} 
persona1;// variable de la estructura

int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre, 20, '\n');
	cout<<"Edad: ";
	cin >> persona1.edad;

	cout<<"\nImprimiendo datos\n";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	getch();
	return 0;
}
