// irul n, sa se verifice prin Divide Et Impera daca este ordonat verif_cresc.

#include <iostream>
using namespace std;

bool verif_cresc(int a[], int st, int dr){
    if(st == dr)
        return true;
    int mij = (st + dr) / 2;
    return verif_cresc(a, st, mij) && verif_cresc(a, mij+1, dr) && a[mij] <= a[mij+1];
}

int main(){
    int n[100], lungime;
    cin >> lungime;
    for(int i = 0; i < lungime; i++)
        cin >> n[i];   

    cout << verif_cresc(n, 1, lungime);
    return 0;
}