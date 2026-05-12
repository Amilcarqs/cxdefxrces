#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int movidos = 0;
        int menor = n;
        for (int i = n-1; i >= 0; i--)
        {
            if (v[i] < menor)
            {
                menor = v[i];
            }
            if(v[i] > menor){
                movidos += (v[i]-menor);
            }
        }

        cout << movidos << '\n';  
    }
    
    return 0;
}

//el programa ya cuenta cuantos bloques se moveran
//falta implementar la parte de restar un bloque a cualquier columna
//para aumentar el numero de bloques desplazados
