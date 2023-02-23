#include <iostream>
using namespace std;

void verificaMaxim(long &number){
    while(number >= 1000000){
        cout << "Numarul este peste 1.000.000, introduceti alt numar: ";
        cin >> number;
    }
}

int main (){
    long a, b, rez;
    cout << "Introduceti a: ";
    cin >> a;
    verificaMaxim(a);
    cout << "Introduceti b: ";
    cin >> b;
    verificaMaxim(b);
    rez = a + b;
    cout << "Suma numerelor a si b, este: " << rez;
    return rez;
}

// V2 
#include <iostream>
using namespace std;

int main (){
    long long a, b, rez;
    cin >> a;
    cin >> b;
    if(a < 1000000000 && b < 1000000000){
        rez = a + b;
        cout << rez;
    }
    return 0;
}

// https://www.pbinfo.ro/probleme/939/sum00?force_reload&force_reload
// Cerinţa
// Se dau 2 numere naturale. Calculaţi suma celor 2 numere date.
// Date de intrare
// Programul citește de la tastatură 2 numere naturale.

// Date de ieşire
// Programul va afișa pe ecran suma celor două numere.

// Restricţii şi precizări
// cele două numere vor fi mai mici decât 1.000.000.000

// Exemplu
// Intrare
// 12 23

// Ieșire
// 35

