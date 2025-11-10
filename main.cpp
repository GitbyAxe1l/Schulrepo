#include <iostream>
using namespace std;

int main(){

    cout << "Bitte gib eine zahl ein um dann alle \nungeradenen werte in dieser zahl wieder zu geben\n";
    int eingabe;

    cin >> eingabe;

    for (int i = 1; i <= eingabe; i += 2) {
        eingabe + i;
        cout << i << ", ";

    //test

    }
}