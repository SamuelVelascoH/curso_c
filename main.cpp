#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n,m,c;
    cout<<"ELIGE LA PELICILA CON EL NUMERO QUE CORRESPONDA: "<<endl;
    cout<<"1.  El gato con botas............100 pesos"<<endl;
    cout<<"2.  Pinocho......................130 pesos"<<endl;
    cout<<"3.  El chavo del ocho............500 pesos"<<endl;
    cout<<"4.  Rata tule....................100 pesos"<<endl;
    cout<<"5.  No contabas con mi astucia...800 pesos"<<endl;
    cin>>n;
    cout<<"Ingrese el monto a pagar. ";
    if (n==1){
        cout<<" El costo es de 100 pesos";
        cin>>m;
        if (m==100){
            cout<<"pelicula: El gato con botas....100 pesos"<<endl<<
                  "pagaste:......................."<<m<<"pesos";

            }
            else if (m>100){
            c=m-100;
            cout<<"pelicula: El gato con botas....100 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos"<<endl<<
                "tu cambio es:.................."<<c<<"pesos";
            }
            else if (m<100){
                cout<<"Ingresaste una cantidad menor al costo, intenta de nuevo."<<endl;
                cin>>m;if (m==100){
                cout<<"pelicula: El gato con botas....100 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos";

            }
            else if (m>100){
                c=m-100;
                cout<<"pelicula: El gato con botas....100 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos"<<endl<<
                    "tu cambio es:.................."<<c<<"pesos";
            }
            }
    }
    if (n==2){
        cout<<" El costo es de 130 pesos";
        cin>>m;
        if (m==130){
            cout<<"pelicula: Pinocho...............130 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos";

        }
        else if (m>130){
            c=m-130;
            cout<<"pelicula: Pinocho...............130 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos"<<endl<<
                "tu cambio es:.................."<<c<<"pesos";
        }
        else if (m<130){
            cout<<"Ingresaste una cantidad menor al costo, intenta de nuevo."<<endl;
            cin>>m;if (m==130){
                cout<<"pelicula: Pinocho...............130 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos";

            }
            else if (m>130){
                c=m-130;
                cout<<"pelicula: Pinocho...............130 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos"<<endl<<
                    "tu cambio es:.................."<<c<<"pesos";
            }
        }
    }
    if (n==3){
        cout<<" El costo es de 500 pesos";
        cin>>m;
        if (m==500){
            cout<<"pelicula: El Chavo del ocho.....500 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos";

        }
        else if (m>500){
            c=m-500;
            cout<<"pelicula: El Chavo del ocho.....500 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos"<<endl<<
                "tu cambio es:.................."<<c<<"pesos";
        }
        else if (m<500){
            cout<<"Ingresaste una cantidad menor al costo, intenta de nuevo."<<endl;
            cin>>m;if (m==500){
                cout<<"pelicula: El Chavo del ocho.....500 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos";

            }
            else if (m>500){
                c=m-500;
                cout<<"pelicula: El Chavo del ocho.....500 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos"<<endl<<
                    "tu cambio es:.................."<<c<<"pesos";
            }
        }
    }
    if (n==4){
        cout<<" El costo es de 100 pesos";
        cin>>m;
        if (m==100){
            cout<<"pelicula: Rata tule.............100 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos";

        }
        else if (m>100){
            c=m-100;
            cout<<"pelicula: Rata tule.............100 pesos"<<endl<<
                "pagaste:......................."<<m<<"pesos"<<endl<<
                "tu cambio es:.................."<<c<<"pesos";
        }
        else if (m<100){
            cout<<"Ingresaste una cantidad menor al costo, intenta de nuevo."<<endl;
            cin>>m;if (m==100){
                cout<<"pelicula: Rata tule.............100 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos";

            }
            else if (m>100){
                c=m-100;
                cout<<"pelicula: Rata tule.............100 pesos"<<endl<<
                    "pagaste:......................."<<m<<"pesos"<<endl<<
                    "tu cambio es:.................."<<c<<"pesos";
            }
        }
    }
    if (n==5){
        cout<<" El costo es de 800 pesos";
        cin>>m;
        if (m==800){
            cout<<"pelicula: No contabas con mi astucia....800 pesos"<<endl<<
                "pagaste:..............................."<<m<<"pesos";

        }
        else if (m>800){
            c=m-800;
            cout<<"pelicula: No contabas con mi astucia....800 pesos"<<endl<<
                "pagaste:..............................."<<m<<"pesos"<<endl<<
                "tu cambio es:.........................."<<c<<"pesos";
        }
        else if (m<800){
            cout<<"Ingresaste una cantidad menor al costo, intenta de nuevo."<<endl;
            cin>>m;if (m==800){
                cout<<"pelicula: No contabas con mi astucia....800 pesos"<<endl<<
                    "pagaste:..............................."<<m<<"pesos";

            }
            else if (m>800){
                c=m-800;
                cout<<"pelicula: No contabas con mi astucia....800 pesos"<<endl<<
                    "pagaste:..............................."<<m<<"pesos"<<endl<<
                    "tu cambio es:.........................."<<c<<"pesos";
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





