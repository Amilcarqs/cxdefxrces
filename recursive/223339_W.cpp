#include <bits/stdc++.h>
using namespace std;

long long rearch(long long a, long long n){
    if(a==n) { return 1;}
    if (a>n){return 0;}
    else{
        return rearch(a*10,n)+rearch(a*20,n);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {        
        long long n;
        cin >> n;
        if(rearch(1,n) >= 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}