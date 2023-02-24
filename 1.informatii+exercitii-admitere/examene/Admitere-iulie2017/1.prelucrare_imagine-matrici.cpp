#include <iostream>
#include <cstring>
using namespace std;

void citire_matrice(int matrice[][320], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Introduceti el. de pe poz. " << i << " " << j << " = ";
            cin >> matrice[i][j];
        }
    }
}

void afisare_matrice(int matrice[][320], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrice[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

//Inversare
void I (int matrice[][320], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrice[i][j] = 1 - matrice[i][j];
        }
    }
    cout << "\n";
}

//Rotire
void R (int a[][320], int n){
    int aux[320][320];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            aux[i][j] = a[n-j-1][i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = aux[i][j];
}

//Zoom
void Z (int a[][320], int &n){
    int aux[2*n][2*n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            aux[(i*2)][(j*2)] = a[i][j];
            aux[(i*2)][(j*2)+1] = a[i][j];
            aux[(i*2)+1][(j*2)] = a[i][j];
            aux[(i*2)+1][(j*2)+1] = a[i][j];
        }
    }
    n = n * 2;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = aux[i][j];
}

int main(){
    int n, imagine[320][320];
    char operatiuni[5];
    cout << "Introduceti n care reprezinta numarul de linii si de coloane: ";
    cin >> n;
    citire_matrice(imagine, n); 
    cout << "Limita este de 4 operatiuni, ele pot fi I/R/Z. Introduceti operatiunile dorite: \n";
    cin >> operatiuni;

    cout << "Matricea declarata este: \n";
    afisare_matrice(imagine, n);
    for(int i = 0; i < strlen(operatiuni); i++){
        if(operatiuni[i] == 'I')
            I(imagine, n);
        if(operatiuni[i] == 'R')
            R(imagine, n);
        if(operatiuni[i] == 'Z')
            Z(imagine, n);
    }
    cout << "Matricea rezultata este: \n";
    afisare_matrice(imagine, n);

    return 0;
}

//Rotirea Versiunea 2
// void R (int a[][320], int n){
//     int aux[320][320];

//     for(int i = 0; i < n; i++){
//         int colum = (n-1) - i;
//         for(int j = 0; j < n; j++){
//             aux[j][colum] = a[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++)
//             a[i][j] = aux[i][j];
// }