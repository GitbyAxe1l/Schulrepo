/*
 * Leon Roloff
 */

#include  <iostream>
#include <vector>
#include <windows.h>

#include <iomanip>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int  eingabe, eingabegroese,zahlenmenge,mengesorten;
    char entscheidung;
    vector<int> original;
    vector<int> sorting_storage_new;
    do {
        cout << "Zahl generieren = J , Selbst eintippen = N" << endl;
    cin >> entscheidung;
    switch (entscheidung) {
        case 'J': {
            cout<< "Wie viel Zahlen willst du Sortieren?" << endl;
            cin >> zahlenmenge;
            cout<< "Wie groß soll der Bereich sein in dem die Zahlen generiert werden sollen?" << endl;
            cin >> mengesorten;

            for (int i = 0; i < zahlenmenge; i++) {
                int randomnumber = rand() % mengesorten;
                original.push_back(randomnumber);

            }
            cout << "--------------Deine random generierten Nummern--------------"<<endl;
            int counter= 0;
            for (int alles : original) {
                cout << " | " << alles;
                counter++;

                if (counter % 10 == 0) {
                    cout << " | " << endl;
                }

            }
            break;
        }
        case 'N': {
            cout<< "Wie viel Zahlen willst du Sortieren?" << endl;
            cin >> eingabegroese;
            cout << "Bitte gib " << eingabegroese << " Zahlen ein:" <<endl;
            int counter= 0;
            for (int i = 0; i < eingabegroese; i++) {
                cin >> eingabe;
                original.push_back(eingabe);
            }
            cout << "--------------Deine Nummern--------------"<<endl;
            for (int alles : original) {
                cout << " | " << alles;
                counter++;
                if (counter % 10 == 0) {
                    cout << " | " << endl;
                }

            }
            break;
        }
        default:
            cout << "Falsche Eingabe" << "J(Ja) oder N(Nein) !!" << endl;
            break;

    }

    /*
     * Max Vergleicht sich immer wieder mit der nächsten Zahl bis es die Größte ist
     */
    int max = original[0];
    for (int i=0;i<original.size();i++) {
        if (original[i] > max) max = original[i];
    }
    // Zählt einfach nur hoch bis zum Maximum
    for (int zaehler=0; zaehler <= max; zaehler++) {
        //Vergleich Zähler und Original Stellen und Packt es auf den Letzten platz
        for (int i=0;i<original.size();i++) {
            if (original[i] == zaehler) {
                sorting_storage_new.push_back(original[i]);
            }
        }
    }
    cout << endl <<"--------------Alles sortiert!--------------"<< endl;
    for (int sorted : sorting_storage_new) {
        cout << " | " << sorted;
    }
    cout << " |" <<endl;

    cout << "Minimum: " << sorting_storage_new.front() << endl
         << "Maximum: " << sorting_storage_new.back() << endl
         << "Menge an Zahlen: " << sorting_storage_new.size() << endl;

    float durschnitt = 0.0;
    for (int schnitt : sorting_storage_new) {
        durschnitt += schnitt;
    }
    durschnitt /= sorting_storage_new.size();
    cout << "Durchschnitt " << durschnitt << endl << endl;

    }while (1);
}
