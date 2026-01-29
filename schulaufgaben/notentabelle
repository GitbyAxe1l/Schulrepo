#include <iostream>
#include <vector>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float noten[5][4];
    string namen[5];
    string spalten[4] = {"Note 1", "Note 2", "Note 3", "Note 4"};


    for (int i = 0; i < 5; i++) {
        cout << "Name und 4 Noten eingeben: ";
        cin >> namen[i];
        for (int j = 0; j < 4; j++) {
            cin >> noten[i][j];
        }
    }


    cout << left << setw(15) << "Name";
    for (int i = 0; i < 4; i++) {
        cout << setw(10) << spalten[i];
    }
    cout << endl;


    cout << string(15 + 4 * 10, '-') << endl;


    for (int i = 0; i < 5; i++) {
        cout << left << setw(15) << namen[i];
        for (int j = 0; j < 4; j++) {
            cout << setw(10) << noten[i][j];
        }
        cout << endl;
    }

    return 0;
}


// Setw ist einfach nur ausrichtung für die nächste ausgabe
// left ist nur die ausrichtung so wie right oder internal für vorzeichen