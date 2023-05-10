#include <iostream>

using namespace std;

int aranjamente(int n, int k){
    int prod = 1;
    for(int i = n - k + 1; i <= n; i++)
        prod *= i;
    return prod;
}

int aranjamente_rec(int n, int k){
    if(k == 0)
        return 1;
    return (n-k+1) * aranjamente_rec(n, k-1);
}

// 5 3
// 5-3+1 = 3   5-3-1+1= 5-2+1 = 4     5-3-1-1+1=5-1+1 = 5

int main(){
    int n, k; 
    cin >> n >> k;
    // cout << aranjamente(n, k);
    cout << aranjamente_rec(n, k);

    return 0;
}