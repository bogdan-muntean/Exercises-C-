#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cin >> n;
    while(n){
        suma += n % 10;
        n = n / 10;
    }
    cout << suma;
    return 0;
}

// Cerinţă
// Calculaţi suma cifrelor numărului dat.
// Date de intrare
// Programul va citi de la tastatură un număr natural.
// Date de ieşire
// Programul va afişa pe ecran suma cifrelor numărului citit.
// Restricţii şi precizări
//     numărul citit va fi mai mic decât 2.000.000.000


//Gresit, 30pct
// int n, sum = 0, a;
//     cin >> n;
//     if(n >= 0 && n <= 9)
//         sum = n;
//     while(n < 0 && n > 9){
//         a = n % 10;
//         sum += a;
//         n = n / 10;
//         if(n >= 0 && n <= 9)
//         sum += n;
//     }
//     cout << sum;