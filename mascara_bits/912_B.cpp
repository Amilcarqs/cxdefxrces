#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, k;
    cin >> n >> k;

    if (k==1)
    {
        cout << n;
        return 0;
    }
    
    long long m = n;
    m |= m >> 1;
    m |= m >> 2;
    m |= m >> 4;
    m |= m >> 8;
    m |= m >> 16;
    m |= m >> 32;

    cout << m;
    return 0;
}

/*
Qué hace realmente el truco de bits

Este bloque:

m |= m >> 1;
m |= m >> 2;
m |= m >> 4;
m |= m >> 8;
m |= m >> 16;
m |= m >> 32;

convierte:
1001000
en:
1111111
o sea:
👉 todos los bits desde el más significativo quedan en 1
*/