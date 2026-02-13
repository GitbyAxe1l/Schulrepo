#include <iostream>
#include <windows.h>
using namespace std;

struct WSR {
    // Funktion für manuelle eingabe fehlt
    float median[3];
    int n = 10;
    float boxplot[10];
    void werteboxplot(void);
    void bubblesort (void);
    void bubblesortausgabe(void);
    void medianberechnung (void);
    void MinumumMaximum(void);
    void mittelwert(void);
    void trennungslinie(void);
};
void WSR::werteboxplot(void) {
    cout << "welche größe soll das boxplot haben\n";
    cin >> n;
    if (n == 0) {
        cout << "Größe 0 ist nicht erlaubt aber vorregistriert :3\nDas Boxplot ist mit 1,1,1,2,2,3,3,5,5 beschrieben";
        n=9;
        boxplot[0]=1; boxplot[1]=1; boxplot[2]=1; boxplot[3]=2; boxplot[4]=2; boxplot[5]=3; boxplot[6]=3; boxplot[7]=5; boxplot[8]=5;
    }else{
        cout << "Das Boxplot hat jetzt die Größe: " << n << endl;
        for (int i = 0; i < n; i++) {
            cout << "Geben sie nun ihre " << i+1 << " Zahl für das Boxplot an.";
            cin >> boxplot[i];
        }
    }
}
void WSR::medianberechnung (void) {

    int median1stelle;
    int median2stelle;
    int median3stelle;

    //ungerade braucht  nen fix aber gerade kein bock
    if (n % 2 == 0) {
         //Mittlere Median Stelle
        int median1= n/2;
        int median2= median1/2;
        int median3= median1 + ((n-median1)/2);
        //1 2 3 4 5 6 7 8 9 10
        //   q     q     q

        median[0] = (boxplot[median2] + boxplot[median2 + 1])/2;
        cout <<boxplot[median2] <<" , "<<boxplot[median2 + 1];
        median[1] = (boxplot[median1-1] + boxplot[median1])/2;
        median[2] = boxplot[median3] + boxplot[median3+ 1]/2;

        for (int i = 0; i <3; i++) {
            cout << "Dein Median [" << i +1 << "] hat den Wert: " <<median[i] << endl;
        }
    }else {
    //Abspeichern in median array fehlt
        trennungslinie();
        median1stelle = n /2;
        cout << "median 1 ist an Stelle= " << median1stelle +1 << "\nder Wert an dieser Stelle ist " <<boxplot[median1stelle] << endl;
        trennungslinie();
        median2stelle =  (median1stelle - 1)/2;
        cout << "median 2 ist an Stelle= " << median2stelle +1 << "\nder Wert an dieser Stelle ist " <<boxplot[median2stelle] << endl;
        trennungslinie();
        median3stelle =  median1stelle + ((n - median1stelle)/2);
        cout << "median 3 ist an Stelle= " << median3stelle +1 << "\nder Wert an dieser Stelle ist " <<boxplot[median3stelle] << endl;
        trennungslinie();

    }

}
void WSR::trennungslinie (void) {
    cout << "----------------------------------------\n";
}

void WSR::MinumumMaximum(void) {
    trennungslinie();
    cout << "Dein Minimum ist " << boxplot[0] << "\ndein Maximum ist: " << boxplot[n-1] << endl;
    trennungslinie();

}


void WSR::mittelwert() {
    float mittelwert = 0;
    for (int i = 0; i < n; i++) {
        mittelwert += boxplot[i];
    }
    mittelwert /= 2;
    trennungslinie();
    cout << "Dein Mittelwert ist " << mittelwert << endl;
    trennungslinie();
}

void WSR::bubblesort (void) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (boxplot[j] > boxplot[j + 1]) {
                int temp = boxplot[j];
                boxplot[j] = boxplot[j + 1];
                boxplot[j + 1] = temp;
            }
        }
    }
}

void WSR::bubblesortausgabe(void) {
    cout << "\n--- Bubblesort ausgabe---\n";
    for (int i = 0; i < n; i++) {
        cout << boxplot[i] << " ";
    }
    cout << "\n-------------------------\n";

}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    //SetConsoleOutputCP(1252);

    WSR Mwerte;
    Mwerte.werteboxplot();
    Mwerte.bubblesort();
    Mwerte.bubblesortausgabe();
    Mwerte.medianberechnung();
    Mwerte.MinumumMaximum();
    Mwerte.mittelwert();


    return 0;
}
