#include <iostream>
using namespace std;
int main(){
    int n, i = 0, MAX =-1000000000, numar;
    cin >> n;
    while(i != n){
        cin >> numar;
        if(numar > MAX)
            MAX = numar;
        i++;
    }
    cout << MAX;
    return 0;
}


// Cerinţa
// Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.
// Date de intrare
// Programul citește de la tastatură numărul n, iar apoi n numere întregi, separate prin spaţii.

// Date de ieşire
// Programul afișează pe ecran numărul MAX, reprezentând cel mai mare dintre cele n numere date.
// Restricţii şi precizări
//     1 ≤ n ≤ 1000
//     cele n numere citite vor avea cel mult 9 cifre


// Eroare in afara graficului? + pe pbinfo 60pct
// int n;
//     do {
//         cin >> n;
//     } while(n < 1 && n > 1000);

//     int *V = (int*)malloc(sizeof(int)*n);
//     int max = 0;
//     for(int i = 0; i < n; i++){
//         cin >> V[i];
//         if(V[i] > max){
//             max = V[i];
//         }
//     }
//     cout << max;