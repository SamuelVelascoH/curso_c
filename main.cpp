#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int main () {
  //While example
  int c = 0;
  //forma clasica
  while(c < 10){
      cout<<c<<" Ya por favoo..."<<endl;
      c= c+1;
  }
  //forma fea pero a veces necesaria
  while(true){
    cout<<c<<" Ya por favoo..."<<endl;
    c= c+1;
    if(c > 10){
        break;
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

}


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





