#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if(n<=1) { return 1;}
    else{
        return n*factorial(n-1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << factorial(n);
    return 0;
}