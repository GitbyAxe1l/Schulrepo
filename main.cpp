/*
 * Leon Roloff
 *
 */

#include  <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char eingabe;
    bool korrektur = false;


    float test[3]={6,6,6};

    do {

        cout << "[1] Manuelle Noteneingabe\n"
             << "[2] Musgabe der manuellen Noteneingabe\n"
             << "[3] Morrektur Möglichkeit der Noteneingabe\n";

        cin >> eingabe; //


        switch (eingabe) {

            case '1':
                cout << "bitte gib 3 zahlen ein zum abspeichern in einem array\n";

                for (int i =0; i < 3; i++) {
                    test[i];
                    cout << "Bitte gib die " << i +1 << " Zahl ein\n";
                    cin >> test[i];
                    cout << "Debug:" << test[i] << endl;
                }

                break;

            case '2':

                for (int i =0; i < 3; i++) {
                    cout << "Note" << i+1 << " ist: " << test[i] << "\n";
                }

                break;

            case '3':


                if (eingabe == '1') {
                    cout << "bastard";
                }else if(eingabe == '2') {
                    cout << "mongo";
                } else if (eingabe == '3') {
                    cout << "test3";
                }
                //korrektur = true;


                break;
            default:
                cout << "Falsche Eingabe!\n";
                break;

        }

        while (korrektur == true) {



            switch (eingabe) {
                case '1':
                    cout << "Geben sie bitte die zahl ein die sie an Stelle der ersten note ändern wollen;\n";
                    break;
                case '2':
                    cout << "Geben sie bitte die zahl ein die sie an Stelle der ersten note ändern wollen;\n";
                    break;
                case '3':
                    cout << "Geben sie bitte die zahl ein die sie an Stelle der ersten note ändern wollen;\n";
                default:
                    break;
            }
        }

    } while (1);





}