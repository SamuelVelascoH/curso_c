#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n,k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cin>>k;
    for (int i = 0; i < n; ++i) {
        if ((a[i]%k)==0){
            cout<<a[i]<<" ";
        }else cout<<"x ";
    }



}








































/*

    int tamFilas = 4;
    int tamCols = 7;
    string horarios[tamFilas][tamCols];

    */
/*
     [ hora ][   domingo  ][ lunes ][ martes ][ miercoles ][ jueves ][ viernes ]
     [ 7-8  ][ programing ][ artes ][       ][            ][        ][         ]
     [      ][            ][       ][       ][            ][        ][         ]
     [      ][            ][       ][       ][            ][        ][         ]
     [      ][            ][       ][       ][            ][        ][         ]
     *//*

    horarios[0][0] = "Hora";
    horarios[0][1] = "Materia";
    horarios[0][2] = "Lunes";
    horarios[0][3] = "Martes";
    horarios[0][4] = "Miercoles";
    horarios[0][5] = "Jueves";
    horarios[0][6] = "Viernes";

    horarios[1][0] = "7 - 8";
    horarios[1][1] = "Programing";
    horarios[1][2] = "artes";
    cout<<endl;
    for (int i = 0; i < tamFilas; ++i) {
        for (int j = 0; j < tamCols; ++j) {
            cout<<"["<<horarios[i][j]<<"\t"<<"]";
        }
        cout<<endl;
    }
*/





