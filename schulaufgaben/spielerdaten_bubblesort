#include <iostream>
#include <windows.h>
using namespace std;

struct SD { // Spielerdaten
    string nn = "User";
    int lev = 0;
    int pts = 0;

    void setspielerdaten(int spielerNr);
    void getspielerdaten(int spielerNr) const;
};

// Eingabe der Spielerdaten (für EINEN Spieler)
void SD::setspielerdaten(int spielerNr) {
    cout << "Bitte geben sie ein Username für Spieler " << spielerNr << endl;
    cin >> nn;

    cout << "Bitte geben sie das Level für Spieler " << spielerNr << endl;
    cin >> lev;

    cout << "Bitte geben sie die Punkte für Spieler " << spielerNr << endl;
    cin >> pts;
}

// Ausgabe der Spielerdaten (für EINEN Spieler)
void SD::getspielerdaten(int spielerNr) const {
    cout << "\nDer Spieler " << spielerNr << " hat folgende Daten:\n";
    cout << "Username: " << nn << endl;
    cout << "Level: " << lev << endl;
    cout << "Punkte: " << pts << endl;
}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    SD Spieler[5];

    // Eingabe
    for (int i = 0; i < 5; i++) {
        Spieler[i].setspielerdaten(i + 1);
    }

    // Ausgabe
    for (int i = 0; i < 5; i++) {
        Spieler[i].getspielerdaten(i + 1);
    }



    int n = 5;
    // Wer hat die meisten Punkte -- Bubblesort

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (Spieler[j].lev < Spieler[j + 1].lev) {
                SD temp = Spieler[j];
                Spieler[j] = Spieler[j + 1];
                Spieler[j + 1] = temp;
            }
        }
    }

    // Ausgabe: Ranking nach Level
    cout << "\n--- Ranking Nach LVL---\n";
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << Spieler[i].nn
             << " | Level: " << Spieler[i].lev
             << " | Punkte: " << Spieler[i].pts << endl;
    }


    return 0;
}
