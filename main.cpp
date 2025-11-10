#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    //-------------------------------------------------------------
    // Alle speicher die ich angelegt hatte
    //-------------------------------------------------------------
    float noten[100]; // Array für bis zu 100 Noten
    float note, summe; // Gesamt note und note ist hier
    int anzahl; // die menge an Noten die man rechnen will
    char nochmal; // wiederholung der schleife
    //-------------------------------------------------------------

    do {
        cout << "\nWie viele Noten willst du eingeben? ";
        cin >> anzahl;

        if (anzahl <= 0 || anzahl > 100) {
            cout << "Ungültige Eingabe! Anzahl muss zwischen 1 und 100 sein.\n";
            continue;
        }
        summe = 0;

        for (int i = 0; i < anzahl; i++) {
            cout << "Gib Note " << i + 1 << " ein (1 - 6): ";
            cin >> note;

            // Von Chatgpt aber ich verstehe was es macht. Mit meiner Ergänzung.
            //
            if (cin.fail()) {
                cout << "Ungültige Eingabe! Bitte nur Zahlen eingeben.\n";
                cin.clear();             // Fehlerstatus zurücksetzen
                cin.ignore(10000, '\n'); // Rest der Eingabe löschen -- Maximale verworfene zahlen -- 10000
                i--; // damit ich wieder bei der zahl davor bin
                continue;
            }
            //-----------------------------------------------------

            if (note < 1 || note > 6) {
                cout << "Falsche Note! Bitte zwischen 1 und 6.\n";
                i--; // damit ich wieder bei der zahl davor bin
                continue;
            }

            noten[i] = note;
            summe += note;
        }

        float durchschnitt = summe / anzahl;
        cout << "\nDurchschnitt der Noten: " << durchschnitt << endl;


        cout << "Eingegebene Noten: ";
        for (int i = 0; i < anzahl; i++) {
            cout << noten[i] << ", ";
        }
        cout << endl;

        cout << "\nNochmal neue Noten eingeben? (j/n): ";
        cin >> nochmal;

    } while (nochmal == 'j' || nochmal == 'J');

    cout << "\nProgramm beendet. byyyeeeee\n";
    return 0;
}
