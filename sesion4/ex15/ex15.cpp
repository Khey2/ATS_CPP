/*
    EJRCICIO 15:

    Realiza  un programa que colicite al usuario que piense un numero entero entre el 1 y el 100.

    el programa debe generar un numero aleatorio en ese mismo rango [1-100]

    e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio
    ,asi hasta que lo ADVINE, por ultimo mostrarle el numero
    de intentos que le llevo =O

 */

#include<iostream>
#include<conio.h>
#include<random>

using namespace std;

int main(){
    int respuesta;
    int intentos = 0;

    // Define el rango
    int lower_bound = 1;
    int upper_bound = 100;

    // Genera el generador de números aleatorios
    random_device rd;  // Fuente de entropía
    mt19937 gen(rd()); // Generador de números aleatorios Mersenne Twister

    // Define la distribución
    uniform_int_distribution<> distrib(lower_bound, upper_bound);

    // Genera el número aleatorio
    int random_number = distrib(gen);

    cout << "Numero aleatorio entre " << lower_bound << " y " << upper_bound << ": " << random_number << std::endl;

    do
    {   
        cout<<endl<<"Digita el numero que cres que pudo haber sido generado: ";
        cin>>respuesta;

        if( respuesta < random_number){
            cout<<"El numero que digitaste es MENOR a el generado: ";
        }
        if( respuesta > random_number ){
            cout<<"El numero que digitaste es MAYOR a el generado: ";
        }

        intentos++;
    } while ( respuesta != random_number );

    cout<<" CORRECTO encontraste en numero secreto: "<<respuesta<<" = "<<random_number;
    cout<<" NUMERO de intentos totales "<<intentos;
    
    getch();
    return 0;
}