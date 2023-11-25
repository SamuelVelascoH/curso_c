#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main () {
    int n=8;
    // 100010001000100010
    //cin>>n;

    for (int i = 0; i < n; ++i) {
        if(i%3==0 ){
            cout<<"1";
        }
        else cout<<"0";
    }

}
