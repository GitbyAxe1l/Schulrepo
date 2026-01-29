/*
 * Leon Roloff
 * -----------------------------
 * DVD Menu mit Switch case
 * -----------------------------
 */

#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    cout << "-------------DVD Menu------------\n"
         << "|                               |\n"
         << "|           [1] Start           |\n"
         << "|           [2] Optionen        |\n"
         << "|           [3] Auswahl         |\n"
         << "|           [4] Exit            |\n"
         << "|-------------------------------|\n"
         << "| Nummer eingeben zum auswählen |\n"
         << "---------------------------------\n";

    /*
     *-----------------------------------------------------------------------------
     *                        Speicher für den ganzen Code
     *-----------------------------------------------------------------------------
    */
    char eingabe;
    cin >> eingabe;

    // Speicher für die menus

    bool case1schleife = true;
    bool case2schleife = true;
    bool case3schleife = true;
    bool pausiert = false;
    string menueingaben;
    //-----------------------------------------------------------------------------


    switch (eingabe) {
        case '1':

            while (case1schleife) {
                cout << "--------------Start--------------\n"
                    << "|                               |\n"
                    << "|                               |\n"
                    << "|           * Film *            |\n"
                    << "|                               |\n";
                if (!pausiert) {
                    cout << "|       * Spielt gerade *       |\n";
                } else {
                    cout << "|    * ist gerade Pausiert *    |\n";
                }

                cout << "|                               |\n"
                     << "|                               |\n"
                     << "---------------------------------\n";

                if (pausiert) {
                    cout << "|  'leertaste' wieder starten  |\n"
                         << "|  'esc' zurük zum Hauptmenu   |\n";
                } else {
                    cout << "|    'leertaste' zum pausieren  |\n"
                         << "|  'esc' zurük zum Hauptmenu    |\n";
                }

                cout << "|                               |\n"
                     << "---------------------------------\n";
                cin >> menueingaben;

                if (menueingaben == "leertaste") {
                    pausiert = !pausiert; // Umschalten zwischen Pause/Play
                }
                else if (menueingaben == "esc") {
                    cout << "Zurück zum Hauptmenue...\n";
                    case1schleife = false; // beende Start-Menü
                }
            }
            break;

        case '2':

            while (case2schleife) {
                cout << "--------------Optionen--------------\n"
                    << "|                                    |\n"
                    << "|           [1] Lautstärke           |\n"
                    << "|           [2] Grafik               |\n"
                    << "|           [3] Exit                 |\n"
                    << "-------------------------------------\n";

                cin >> menueingaben;

                if (menueingaben == "esc") {
                    break;
                }
            }

            break;
        case '3':
            while (case3schleife) {
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

                cin >> menueingaben;
                if (menueingaben == "esc") {
                    case3schleife = false;

                }
            }
            break;
        case '4': cout << "Cd wird ausgegeben";
            break;


        default: cout << "Option Menu" << endl;
    }


}
