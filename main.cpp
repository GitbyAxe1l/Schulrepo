#include <iostream>
#include <math.h>
using namespace std;

float strecke (float a, float t);
float zeit(float a, float S);
float geschwindigkeit(float S, float t);

void werteholen(void);
void wertereset(void);

struct  {

    char eingabe;
    float eingabe1;
    float eingabe2;
}eingabewerte;


int main() {



    // pow basis exponent  zb (^2),  power  of 2  also 2^5 // pow(t,2)
    // sqr , squareroot // sqrt()


    //s = 0.5 * a * t^2

    cout << "Bitte Wähle s, t oder a zum berechnen";
    cin >> eingabewerte.eingabe;
    switch (eingabewerte.eingabe) {
        case 's':
            werteholen();
            cout << "Dein Ergebnis ist:" << 0.5 * eingabewerte.eingabe1 * (eingabewerte.eingabe2 * eingabewerte.eingabe2);
            wertereset();

            break;
        case 't':
            werteholen();
            cout << "Dein Ergebnis ist:" << sqrt((2 * eingabewerte.eingabe1) / eingabewerte.eingabe2);;
            wertereset();
            break;
        case 'a':
            werteholen();
            cout << "Dein Ergebnis ist:" << eingabewerte.eingabe1 / eingabewerte.eingabe2;;
            wertereset();
            break;
        default:
            break;
    }

    return 0;
}
float strecke (float a, float t) {
}
float zeit(float a, float S) {
}
float geschwindigkeit(float S, float t) {


}
void werteholen(void) {
    cout << "Bitte Gib dein ersten wert ein";
    cin >> eingabewerte.eingabe1;
    cout << "Bitte gib dein zweiten wert ein";
    cin >> eingabewerte.eingabe2;
}
void wertereset(void) {
    eingabewerte.eingabe1 = 0;
    eingabewerte.eingabe2 = 0;
    cout << "Werte Resetet"
         << "W1: "<<eingabewerte.eingabe1<<endl
         << "W2 "<<eingabewerte.eingabe2<<endl;
}