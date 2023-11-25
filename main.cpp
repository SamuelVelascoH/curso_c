#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main () {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número N: ");
    scanf("%d", &n);

    // Verificar si el número es válido
    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1; // Salir del programa con un código de error
    }

    // Inicializar una variable para alternar entre 1 y 2 ceros
    int ceros = 1;

    // Generar el patrón solicitado
    for (int i = 1; i <= n; i++) {
        // Imprimir '1' si ceros es impar, '00' si es par
        if (ceros % 2 == 1) {
            printf("1");
        } else {
            printf("0");
        }

        // Alternar entre 1 y 2 ceros
        ceros++;

        // Si ceros llega a 3, reiniciar en 1
        if (ceros > 2) {
            ceros = 1;
        }
    }

    // Salto de línea al final
    printf("\n");

    return 0; // Indicar que el programa se ejecutó con éxito
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





