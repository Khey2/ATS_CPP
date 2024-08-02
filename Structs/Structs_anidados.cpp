//Estructuras ANIDADAS en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2]; //Declaras un arreglo llamado "egmpleados" con 2 indices, cada indice
			  //es un estructura de empelado completa

int main(){
	
	for(int i = 0; i < 2; i++){
		fflush(stdin);//Limpiando BUFFER para que nos permita seguir digitando valores
		cout<<"Digita el nombre del empleado numero "<<i<<": "<<endl;
		cin.getline(empleados[i].nombre, 20, '\n');
		cout<<"Digita la direccion del empleado numero "<<i<<": "<<endl;
		cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
		cout<<"Ciudad: "<<endl;
		cin.getline(empleados[i].dir_empleado.ciudad, 20 ,'\n');
		cout<<"Provincia: "<<endl;
		cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
		cout<<"Digita el salario: ";
		cin>>empleados[i].salario;
		cout<<endl<<endl;
	}
	
	//Imprimiendo los datos
	for(int i =0; i < 2; i++){
		cout<<"El nombre del empleado es: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl<<endl<<endl<<endl;
	}
	
	getch();
	return 0;
}
			  

