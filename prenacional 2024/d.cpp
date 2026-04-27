#include <iostream>
#include <cmath>
using namespace std;


// Suma de divisores
double suma_divisores(int a) {
    int suma = 0;
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a%i == 0){
            int aux = a / i;
            if (i!=a){
                suma += i;
            }
            if(aux != i && aux!=a){
                suma += aux;
            }
            //cout << i << endl;
        }
    }
    return suma;
}

int main() {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int suma_a= suma_divisores(a);
        cout << a;
        if (suma_a == a){
            cout << " perfecto";
        } else if (a == suma_divisores(suma_a)){
            cout << " romantico";
            if (suma_a > a)
            {
                cout << " abundante";
            }
            
        }else if(suma_a > a ){
                cout << " abundante";
            }else{
                cout << " complicado";
            }
        cout << endl;
        //cout << suma_a;
    }
    return 0;
}
//resuelto