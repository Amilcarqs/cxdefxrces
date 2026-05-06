#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Leer entrada
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a_i;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a_i;
            a[i] = a_i;
        }
        
        int costo_grupo = 0;
        long long costo = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]==1){
                costo_grupo = 1;
            }else{
                if (costo_grupo == 1){
                    costo_grupo *= a[i];
                }else{
                    costo_grupo = a[i];
                }
            }
            if (costo_grupo != 1)
            {
                costo += costo_grupo;
                costo = costo % 676767677;
                costo_grupo = 0;
            }
            //cout << "costo: "<< costo << '\n';

        }
        if (costo_grupo != 0)
        {
            costo += costo_grupo;
            costo = costo % 676767677;
        }
        cout << costo << '\n';
    }
    return 0;
}