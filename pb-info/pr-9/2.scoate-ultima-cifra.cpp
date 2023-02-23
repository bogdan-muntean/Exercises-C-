#include <iostream>
using namespace std;

int main () {
    unsigned long x, y, sum;
    cin >> x;
    cin >> y;
    sum = x + y;
    cout << sum%10;
    return 0;
}


// Cerința
// Se dau două numere naturale x și y. Calculați ultima cifră a sumei lor.
// Date de intrare
// Programul citește de la tastatură numerele x și y.

// Date de ieșire
// Programul va afișa pe ecran ultima cifră a sumei x+y.
// Restricții și precizări
//     1 ≤ x,y < 1.000.000
