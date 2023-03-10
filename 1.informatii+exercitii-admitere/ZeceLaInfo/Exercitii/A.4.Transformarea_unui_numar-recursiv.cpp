#include <iostream>
using namespace std;

int transformare(int n){
    if(n == 0){
        return 0;
    }
    int aux = n % 10;
    if(aux % 2 == 1)
        return (transformare(n/10));
    return (transformare(n/10) * 10 + aux);
}

int main(){
    int n = 123456;
    cout << transformare(n);
    return 0;
}