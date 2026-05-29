#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> valores;

int maximum(int i, int peso_restante)
{
    if (i == valores.size()) // en caso de qeu ya no haya objetos
    {
        return 0;
    }
    if (valores[i].first > peso_restante) //en caso de no entrar, lo saltamos
    {
        return maximum(i+1, peso_restante);
    }
    // Opción 1: no tomar el objeto
    int no_tomar = maximum(i + 1, peso_restante);
    // Opción 2: tomar el objeto
    int tomar = valores[i].second +
                maximum(i + 1,
                        peso_restante - valores[i].first);

    // Elegimos la mejor opción
    return max(no_tomar, tomar);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, peso;
    cin >> n >> peso;
    for (int i = 0; i < n; i++)
    {
        int w,v; 
        cin >> w >> v;
        valores.push_back({w,v});
    }
    /* for (int i = 0; i < n; i++)
    {
        cout << "VALORES: " << valores[i].first << " " << valores[i].second << "\n";
    } */
    cout << maximum(0, peso) << "\n";    
    return 0;
}