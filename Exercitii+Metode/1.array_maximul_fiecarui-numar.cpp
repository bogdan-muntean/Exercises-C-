#include <iostream>
using namespace std;

int prelucrareMaxime(int sir[], int lungimeSir){
    int i = 0, n = 0;
    while(i < lungimeSir && sir[i] != 0){
        int y = sir[i];
        int c = 0;
        while(y > 0){
            if(y%10 > c){
                c = y%10;
            }
            y = y/10;
        }
        n = n*10 + c;
        i++;
    }
    return n;
}

int main (){
    int rez;
    int arrayExemple[] = {37, 93, 83, 52};
    int lenghtExemple = 4;
    rez = prelucrareMaxime(arrayExemple, lenghtExemple);
    cout << "Sirul cu cele mai mari numere este: " << rez;
}


// Se poate observa din executia algoritmului ca prin structura primului CatTimp se parcurge
// fiecare element al vectorului v, urmand ca prin executia celui de-al doilea CatTimp sa
// iteram fiecare cifra a elemetului current, salvandu-se cifra cu valoarea maxima.
// Cifra cu valoarea maxima rezultata din parcurgerea celui de-al doile CatTimp este adaugata
// la sfarsitul numarului n, numar ce reprezinta rezultatul executiei subalgoritmului
// prelucreaza.
// De aceea am putea formaliza solutia algoritmului in una ce creeaza un numar n din cifrele
// maxime din k numere dintr-un vector v, ordinea cifrelor fiind data de pozitia numarului in
// vectorul v.