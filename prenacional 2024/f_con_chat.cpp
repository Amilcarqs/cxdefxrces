#include <bits/stdc++.h>
using namespace std;

bool check(const vector<long long>& h, const vector<long long>& x) {
    //const &: const no se modifican; & no se compilan (mas eficiente)
    
    long long reach = h[0]; //reach es el alcance actual de la caida

    for (int i = 0; i < (int)x.size(); i++) { //x-size() = n-1
        if (reach <= x[i]) return false; //si el alcance no llega a la siguiente ficha
        reach = max(reach - x[i], h[i + 1]); //tomamos el maximo entre lo que sobre del empuje anterior y la altura de la ficha siguiente
    }

    return true;
}

int main() {
    //para hacer el input/output mas rapido
    ios::sync_with_stdio(false); //descativa la sincronizacion entre cin/cout (c++) y scanf/printf (C)
    cin.tie(nullptr); //desata cin de cout; normalmente cin fuerza a cout a imprimir antes

    int t;
    cin >> t;

    while (t--) { //ejecuta un caso por iteracion
        int n;
        cin >> n;

        vector<long long> h(n), x(n - 1); //h para alturas y x para distancias


        /*Es un range-based for loop (for moderno de C++).
        auto → el compilador deduce el tipo (long long)
        & → estás usando referencia
        v → cada elemento del vector*/
        for (auto &v : h) cin >> v; //lectura rapida usando referencias
        for (auto &v : x) cin >> v;
        /*
        Equivalente clásico
        Esto:
        for (auto &v : h) cin >> v;
        es lo mismo que:
        for (int i = 0; i < h.size(); i++) {
            cin >> h[i];
        }
        */



        // Probar izquierda → derecha
        if (check(h, x)) {
            cout << "habibi\n";
            continue; //saltamos al siguiente caso
        }

        // Probar derecha → izquierda
        reverse(h.begin(), h.end()); //invertimos el problema
        reverse(x.begin(), x.end()); //invertimos el problema

        if (check(h, x)) {
            cout << "habibi\n";
        } else {
            cout << "which\n";
        }
    }

    return 0;
}
/*
notas
Sintaxis de reverse

La función reverse pertenece a la STL (<algorithm>), y su forma general es:

reverse(inicio, fin);
🧠 ¿Qué significan esos parámetros?
inicio → iterador al primer elemento
fin → iterador uno después del último elemento

⚠️ Esto es importante: el rango es [inicio, fin)

Invertir solo una parte
reverse(v.begin() + 1, v.begin() + 4);

Si:

v = {1, 2, 3, 4, 5}

Resultado:

{1, 4, 3, 2, 5}
*/