#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    bool tabelle [2][4] ={
        {false, false , false , false},
        {false, false , false , false}
    };

    int Anzahl1sen= 0;
    int beschreiben;


    //Volles diagramm eingeben
    /*
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            //kv_diagramm[i][j] = 1;
            cout << "Geben sie die werte für die Koordinate: (" << i+1 << " | " << j+1 << ") \n -->";
            cin >> beschreiben;
            if (beschreiben > 1 || beschreiben < 0) {
                j--;
                cout << "Bitte gib nur die werte 1 oder 0 an" << endl;
            }
            tabelle[i][j] = beschreiben;
        }
    }
    */

    //2 Einzelne Eingabe

    for (int i = 0; i < 2; i++) {
        int a = 0;
        int b = 0;
        cout << "Bitte geben sie ein wert für die Y- Koordinate an";
        cin >> a;
        cout << "Bitte geben sie ein wert für die X- Koordinate an";
        cin >> b;
        tabelle[a-1][b-1] = true;
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tabelle[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (tabelle[i][j] ==true) {
                cout << "Eine 1 an Koordinate (" << i+1  <<" | " << j+1 << ")" << endl;
                Anzahl1sen++;

            }
        }
    }
    cout << "Gesamte 1sen Anzahl: " << Anzahl1sen << endl;


    //-----Manuelle volle ausgabe-----
    /*
    cout << "          A    |     !A     "<< endl;
    cout << "    ___________|_____________"<< endl;
    for (int i = 0; i < 2; i++) {
        if (i==1) {
            cout << "!B  |  ";
        }else if (i==0) {
            cout << " B  |  ";

        }

        for (int j = 0; j < 4; j++) {
            cout << tabelle[i][j] << "  |  ";
        }
        cout << endl;
    }

    cout << "    ________|_______|__________"<< endl;
    cout << "       C    |   !C  |    C    "<< endl;
    */



}