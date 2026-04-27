#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //Leer entrada
    int n;
    cin >> n;

    vector<long long> v(n), u(n);
    vector<long long> prefix(n+1, 0), prefix_u(n+1, 0);
    
    //leer array y contruir prefix original
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        prefix[i+1] = v[i] + prefix[i];
    }

    //copiar y ordenar
    u = v;
    sort(u.begin(), u.end());
    
    for (int i = 0; i < n; i++)
    {
        prefix_u[i+1] = prefix_u[i] + u[i];  
    }
    

    int m;
    cin >> m;
    while (m--)
    {
        int option, l,r;
        cin >> option >> l >> r;
        if (option == 1)
        {
            cout << prefix[r] - prefix[l-1]<<'\n';
        }else{
            cout << prefix_u[r] - prefix_u[l-1]<<endl;
        }   
    }
    return 0;
}