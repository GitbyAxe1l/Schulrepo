/*
 * Leon Roloff
 * -----------------------------
 * DVD Menu mit if - else
 * -----------------------------
 */

#include <iostream>
#include <windows.h> //lybrary für die umstellung der Consolen.
using namespace std;
int main() {
    //consolen umstellung das ich Ä Ü Ö verwenden kann
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    //Alle speicher für den Code!
    int input;
    string menueingaben;
    bool an = true;


    do{
        cout << "-------------DVD Menu------------\n"
           << "|                               |\n"
           << "|           [1] Start           |\n"
           << "|           [2] Optionen        |\n"
           << "|           [3] Auswahl         |\n"
           << "|           [4] Exit            |\n"
           << "|-------------------------------|\n"
           << "| Nummer eingeben zum auswählen |\n"
           << "---------------------------------\n";
        cin >> input;

        if (input == 1) {
            cout << "--------------Start--------------\n"
                    << "|                               |\n"
                    << "|                               |\n"
                    << "|           * Film *            |\n"
                    << "|                               |\n"
                    << "|       * Spielt gerade *       |\n"
                    << "|                               |\n"
                    << "|                               |\n"
                    << "---------------------------------\n";
        } else if (input == 2) {
            cout << "--------------Optionen--------------\n"
                    << "|                                    |\n"
                    << "|           [1] Lautstärke           |\n"
                    << "|           [2] Grafik               |\n"
                    << "|           [3] Exit                 |\n"
                    << "-------------------------------------\n";
        } else if (input == 3) {
            cout << "--------------Auswahl--------------\n"
                    << "|                 |                 |\n"
                    << "|Film schnipsel 1 | Film schnipsel 2|\n"
                    << "|-----------------------------------|\n"
                    << "|                 |                 |\n"
                    << "|Film schnipsel 3 | Film schnipsel 4|\n"
                    << "|-----------------------------------|\n"
                    << "|   gib 'esc' ein um zum Hauptmenü  |\n"
                    << "|             zu kommen|            |\n"
                    << "-------------------------------------\n";
        } else if (input == 4) {
            cout << "----------------Exit----------------\n"
                 << "DVD wurde wieder ausgegeben";
            an = false;
        } else if (input <= 5) {
            cout << "ungültige eingabe bitte wähle nur Nummern die auch zur Auswahl stehen\n";

        } else if (input == 0) {
            cout << "ungültige eingabe bitte wähle nur Nummern die auch zur Auswahl stehen\n";
        }
    } while (an);
}
