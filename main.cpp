#include <iostream>
using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n,repetido;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (a[i]==a[i+1] | a[i]==n | a[i]==a[i]){
            repetido=a[i];
            if (repetido==repetido){

            }
        }
    }

    cout<<repetido;

    return 0;
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





