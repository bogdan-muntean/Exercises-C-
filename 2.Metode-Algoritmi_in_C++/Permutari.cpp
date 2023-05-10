#include <iostream>
using namespace std;

int n;
int X[11], P[11];           // P = pus/nepus (daca a fost sau nu pus acel numar)  |  X = valoarea permutarii 

void afisare(){
    for(int i = 1; i <= n; i++)
        cout << X[i] << ' ';
    cout << "\n";
}

void back(int k){
    for(int i = 1; i <= n; i++){
        if(!P[i]){
            P[i] = 1;
            X[k] = i;
            if(k == n)
                afisare();
            else back(k+1);
            P[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    back(1);
    return 0;
}