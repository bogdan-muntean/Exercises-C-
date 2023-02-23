#include <iostream>
using namespace std;

int main () {
    long n, g;
    cin >> n;
    g = n * (n + 1) / 2;
    cout << g;
    return 0;
}

// Cerința
// Se citește n număr natural. Calculați suma tuturor numerelor naturale mai mici sau egale cu n.
// Date de intrare
// Programul citește de la tastatură numărul n, număr natural.
// Date de ieșire
// Programul va afișa pe ecran numărul S, reprezentând suma numerelor mai mici sau egale cu n.
// Restricții și precizări
//     n ≤ 1.000.000
