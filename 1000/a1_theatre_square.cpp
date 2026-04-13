#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n,m,a;
    cin >> n>>m>>a;
    int losas = 0;
    losas += ceil(double(n)/double(a));
    losas += ceil(double(m)/double(a));
    cout << losas;
    return 0;
} //RESUELTO



/*
PARA NO USAR CEIL
usamos la formula de (a + b - 1) / b . DONDE B ES EL DIVISOR
esto nos devuelve el redondeo al entero arriba

en una division es : a = b * q + r
Donde:

q = resultado entero (a / b)
r = residuo (0 ≤ r < b)

🔥 El truco: sumar antes de dividir

Si haces:

(a + k) / b

Quieres encontrar un k tal que:

Cuando haya residuo → empuje al siguiente entero
Cuando no haya residuo → no se pase
💡 ¿Por qué b - 1?

El residuo máximo posible es:

r = b - 1

Entonces, si sumas:

a + (b - 1)
*/