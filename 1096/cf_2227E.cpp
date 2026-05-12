#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        vector<int> a(n);
        for(auto &x : a) cin >> x;

        // ----------------------------------------
        // 1. Construir sufijos mínimos
        // suf[i] = mínimo desde i hasta n-1
        // Representa cuántos cubos NO se mueven en columna i
        // ----------------------------------------
        vector<int> suf(n);
        suf[n-1] = a[n-1];

        for(int i = n-2; i >= 0; i--){
            suf[i] = min(a[i], suf[i+1]);
        }

        // ----------------------------------------
        // 2. Construir "left"
        // left[i] = inicio del bloque donde suf tiene el mismo valor
        // Sirve para contar rápido cuántos suf iguales hay hacia la izquierda
        // ----------------------------------------
        vector<int> left(n);
        left[0] = 0;

        for(int i = 1; i < n; i++){
            if(suf[i] == suf[i-1]){
                left[i] = left[i-1]; // seguimos en el mismo bloque
            } else {
                left[i] = i; // empieza nuevo bloque
            }
        }

        // ----------------------------------------
        // 3. Calcular:
        // total = total de cubos
        // base = cubos que NO se mueven
        // ----------------------------------------
        long long total = 0;
        long long base = 0;

        for(int i = 0; i < n; i++){
            total += a[i];
            base += suf[i];
        }

        // Caso sin operación
        long long ans = total - base;

        // ----------------------------------------
        // 4. Probar quitar 1 cubo en cada posición j
        // ----------------------------------------
        for(int j = 0; j < n; j++){

            // Solo tiene efecto si a[j] es mínimo del sufijo
            if(a[j] == suf[j]){

                // cantidad de posiciones afectadas
                int len = j - left[j] + 1;

                // nueva cantidad de movidos:
                // (total - 1) - (base - len)
                // simplificado:
                // total - base + (len - 1)
                ans = max(ans, total - base + (long long)len - 1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
//resuelto con chatgpt
