#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n;
    cout<<"Ingresa el monto: ";
    cin>>n;
    int billetes500=500,billetes200=200,billetes100=100,billetes50=50;
    if (n%50!=0){
        cout<<"solo multiplos de 50, ingrese (y) para intentar de nuevo o (n) para salir. ";
        string y="y";
        string n2="n";

        if (cin>>y){
            cout<<"Ingresa el monto: ";
            cin>>n;
        }
        if (cin>>n2;n2=="n"){cout<<"adios";}
    }
    else
        billetes50=n/50;
         cout<<"billetes de cincuenta pesos: "<<billetes50<<endl;
        billetes100=n/100;
        cout<<"billetes de cien pesos: "<<billetes100<<endl;
        billetes200=n/200;
        cout<<"billetes de doscientos pesos: "<<billetes200<<endl;
        cout<<"billetes de quinientos pesos: "<<billetes500<<endl;


}






























/**
    partes del bucle while

    palabra_reservada   condicion   bloque
    while               (c < 10)    {}

    forma basica de parar in ciclo;
    int c = 0;
    incrementar c hasta que alcance romper la condicion c>10 == false

*/




/**
 * DECLARACION DE VARIABLES
 * 1...debe iniciar cin una letra
 * 2...pude contener letras y numeros siempre y cuiando inicie cin una letra
 * 3...no debe ser igual a una palabra reservada
 * 4...no puede haber dos variables con el mismo noimbre
 * 5... deben pertenecer a un tipo de dato ejem: char nombre_variable;
 * 6...nu poede haber espacios en el nombre de variable
 * 7... en alguno lenguajes se puede usar el _ dentro del nombre de variable  ejem: string apellido_paterno;
 *
 */





