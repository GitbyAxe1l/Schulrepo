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


    float test[3]={6,6,6};

    do {
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

                break;
            default:
                cout << "Falsche Eingabe!\n";
                break;

        }

    } while (1);





}