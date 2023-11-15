#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n;
    int pos=1;

    cin>>n;
    string es = "";
    int size = n*n;

    while (pos<=size){


        if(pos % n != 0 & (pos-1) % n != 0 & pos > n & pos < (size-n)){
            es += " ";
        }else{
            es += "*";
        }
        if(pos%n == 0){
            es+="\n";
        }
        pos++;

    }
    cout<<es;

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





