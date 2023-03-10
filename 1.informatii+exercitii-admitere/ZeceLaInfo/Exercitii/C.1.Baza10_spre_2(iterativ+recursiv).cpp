#include <iostream>
using namespace std;

void baza2(int n){
    int cifre[1001], indc = 0;
    while(n){
        cifre[++indc] = n % 2;
        n /= 2;
    }
    for(int i = indc; i >= 1 ; i--)
        cout << cifre[i];
}

void baza2_recursiv(int n){
    if(n == 0)
        return ;
    baza2_recursiv(n / 2);
    cout << n % 2;
}

int main(){
    // baza2(45);
    baza2_recursiv(45);

    return 0;
}