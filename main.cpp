#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n,m,c,i;
    cout<<"ELIGE EL PLATILLO CON EL NUMERO QUE CORRESPONDA: "<<endl;
    cout<<"1.  Huevos.......................100 pesos"<<endl;
    cout<<"2.  Huevos revueltos.............130 pesos"<<endl;
    cout<<"3.  Huevos batidos...............500 pesos"<<endl;
    cout<<"4.  Huevos tibios................100 pesos"<<endl;
    cout<<"5.  Huevos muertos...............800 pesos"<<endl;
    cin>>n;
    if (n==1){
        i=100+100*.16;
        cout<<"el costo es de "<<i<<" pesos, ingrese el monto..."<<endl;
        cin>>m;
        if (m==i){
            cout<<"Huevos: costo con iva: "<<i<<" pesos"<<endl<<
                  "pagaste................"<<m<<" pesos"<<endl<<
                  "tu cambio es de......... 0 pesos";
        }
        else if (m>i){
            c=m-i;
            cout<<"Huevos: costo con iva: "<<i<<" pesos"<<endl<<
                "pagaste................"<<m<<" pesos"<<endl<<
                "tu cambio es de......... "<<c<<" pesos";
        }
        else if (m<i){
            cout<<"la cantidad es menor al costo, intente de nuevo...";
            cin>>m;
            if (m==i){
                cout<<"Huevos: costo con iva: "<<i<<" pesos"<<endl<<
                    "pagaste................"<<m<<" pesos"<<endl<<
                    "tu cambio es de......... 0 pesos";
            }
            else if (m>i){
                c=m-i;
                cout<<"Huevos: costo con iva: "<<i<<" pesos"<<endl<<
                    "pagaste................"<<m<<" pesos"<<endl<<
                    "tu cambio es de......... "<<c<<" pesos";
            }
        }
    }


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





