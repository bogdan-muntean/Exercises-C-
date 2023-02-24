#include <iostream>
using namespace std;

int main(){
    int tabel[4][4] = {
        {-2, 1, 0, 1},
        {-1, -2, -1, 0},
        {0, 1, -2, -1},
        {-1, 0, 1, -2}
    };

    // char* numele_echipelor[4] = {"Spania", "Costa Rica", "Germania", "Japonia"};
    const char* numele_echipelor[4] = {"Spania", "Costa Rica", "Germania", "Japonia"};
    int scoruriEchipe[4] = {0,0,0,0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(tabel[i][j] != -2){
                if(tabel[i][j] == 1)
                    scoruriEchipe[i] += 3;
                if(tabel[i][j] == 0)
                    scoruriEchipe[i] += 1;
            }
        }
    }

    for(int i = 0; i < 4; i++)
        cout<< "Scorul pentru " << numele_echipelor[i] << " este de " << scoruriEchipe[i] << " puncte \n";

    int castigator = 0;
    int maxim = 0;
    for(int i = 0; i < 4; i++){
        if(scoruriEchipe[i] > maxim) {
            maxim = scoruriEchipe[i];
            castigator = i;
        }
    }
    cout << "Castigatorul este " << numele_echipelor[castigator];
}

// Se consideră grupa E de la Campionatul Mondial de fotbal și matricea R de mai sus, prin care sunt
// precizate rezultatele obținute în meciurile directe între echipele care formează grupa.
// Astfel,
//  Dacă R[E1, E2] = 1, atunci echipa E1 a câștigat în fața echipei E2
//  Dacă R[E1, E2] = 0, atunci rezultatul meciului E1-E2 a fost egal
//  Dacă R[E1, E2] = -1, atunci echipa E1 a pierdut în fața echipei E2
// Știind că pentru o victorie se acordă 3 puncte, pentru un egal 1 punct, și pentru o înfrângere nu se
// acordă niciun punct, determinați numărul de puncte pentru fiecare echipă și prima echipă calificată în
// faza șaisprezecimilor (echipa cu cele mai multe puncte).