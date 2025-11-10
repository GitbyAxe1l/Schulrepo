#include <iostream>
using namespace std;

int main(){


    float a[5];
    float ausgabe = 0;

    do {

        for (int i = 0; i < 4; i++) {

            cout << "\nGib bitte die" << i + 1 << "Note an\n";
            cin >> a[i]; // eingabe

        }

        for (int i = 0; i < 4; i++) {
            cout << "Array:" << "[" << i<< "]" << "["<< a[i] <<"]" << "\n";
        }
//test
    } while (1);
}