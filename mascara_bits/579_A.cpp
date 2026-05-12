/*
La observación importante es que cada bacteria que agregas evoluciona así:
1→2→4→8→16→…
o sea, siempre produce una potencia de 2.
Caso x=6
6=4+2
Entonces:
una bacteria produce 4
otra produce 2
Total: 2.

Caso x=13
13=8+4+1
Necesitamos:
una bacteria para 8
una para 4
una para 1
Total: 3.

¿Qué tienen en común?

Todas esas descomposiciones son exactamente la representación binaria.

Por ejemplo:

13=1101
2
	​


que significa:

13=1⋅8+1⋅4+0⋅2+1⋅1

Cada 1 indica que necesitamos una bacteria para esa potencia de 2.

Entonces:

👉 La respuesta es la cantidad de bits encendidos (1) en binario.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin >> x;

    int bits_encendidos = 0;

    while (x) { // while (x!=0)
        bits_encendidos += (x & 1); // suma si el último bit es 1
        x >>= 1; //x = x >> 1;
    }
    cout << bits_encendidos << '\n';
    return 0;
}