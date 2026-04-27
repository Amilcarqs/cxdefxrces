#include <iostream>
#include <cmath>
using namespace std;

// Función a integrar
double f(double x) {
    return x * x - 4; // ejemplo: f(x) = x^2
}

// Método del trapecio
double trapecio(double a, double b, int n) {
    double h = (b - a) / n;
    double suma = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        suma += f(a + i * h);
    }

    return suma * h;
}

int main() {
    double a = -3, b = 3;
    int n = 1000;

    cout << "Area aproximada: " << trapecio(a, b, n) << endl;
    return 0;
}