#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int contador = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                contador ++;
            }else{
                contador--;
            }
        }
        if (contador == 0)
        {
            cout << "YES\n"; 
        }else{
            cout << "NO\n";
        }
        
    }
    
    return 0;
}

//resuelto
//Party Monster