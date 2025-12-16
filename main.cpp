#include <iostream>
#include <windows.h>
using namespace std;

float parallel(int r1,int r2);
float reihen(int r1,int r2);

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    int dummy1;
    int dummy2;
    float rges =0;
    int dummy3;


    cout << "Geben sie  bitte die Werte für die Widerstände R1 und R2 ein" << endl;

    cin>>dummy1;
    cin>>dummy2;

    cout << "Wähle sie die Schaltungsweise um Rgesamt auszurechnen" << endl
         << "Paralell [1] , Reihe [2]" << endl;

    cin >> dummy3;

    switch (dummy3) {
        case 1:
            rges = parallel(dummy1,dummy2);
            cout <<  "Dein Gesammter Widerstand ist: " << rges << endl;
            break;
        case 2:
            rges = reihen(dummy1,dummy2);
            cout <<  "Dein Gesammter Widerstand ist: " << rges << endl;
            break;
        default:
            cout<<"du Säckel"<<endl;
            break;
    }
}
float parallel(int r1,int r2) {
    float rges;
    //cout << r1 << " " << r2 << endl;
    rges = 1.0 / ( (1.0 / r1) + (1.0 / r2) );
    return rges;
}
float reihen(int r1,int r2) {
    //cout << r1 << " " << r2 << endl;
    return r1+r2;
}

