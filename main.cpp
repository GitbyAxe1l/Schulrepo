#include <iostream>
#include <windows.h>
using namespace std;


string testen (string namenodersowas = "Ayri");


//
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    testen("mohamed");
    testen();



    return 0;
}


string testen (string namenodersowas) {
    cout << namenodersowas;
}