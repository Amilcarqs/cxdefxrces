#include <bits/stdc++.h>
using namespace std;

const int LIMITE = 5000000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // smallest_prime_factor[numero]
    // guarda el menor primo que divide al numero
    vector<int> smallest_prime_factor(LIMITE + 1, 0);

    // cantidad_factores_primos[numero]
    // guarda cuantos factores primos tiene el numero
    vector<int> cantidad_factores_primos(LIMITE + 1, 0);

    // prefijo_factores[i]
    // guarda:
    // Ω(1) + Ω(2) + ... + Ω(i)
    vector<long long> prefijo_factores(LIMITE + 1, 0);

    /*
        CRIBA SPF
    */

    for (int posible_primo = 2; posible_primo <= LIMITE; posible_primo++)
    {
        // si nadie lo marco antes
        // entonces es primo
        if (smallest_prime_factor[posible_primo] == 0)
        {
            // marcar todos sus multiplos
            for (int multiplo = posible_primo;
                 multiplo <= LIMITE;
                 multiplo += posible_primo)
            {
                // solo guardar el primer primo
                // que llega al numero
                if (smallest_prime_factor[multiplo] == 0)
                {
                    smallest_prime_factor[multiplo] = posible_primo;
                }
            }
        }
    }

    /*
        cantidad de factores primos
    */

    for (int numero = 2; numero <= LIMITE; numero++)
    {
        cantidad_factores_primos[numero] =
            cantidad_factores_primos[numero / smallest_prime_factor[numero]] + 1;
    }

    /*
        prefijos
    */

    for (int numero = 1; numero <= LIMITE; numero++)
    {
        prefijo_factores[numero] =
            prefijo_factores[numero - 1] +
            cantidad_factores_primos[numero];
    }

    /*
        queries
    */

    int cantidad_de_juegos;
    cin >> cantidad_de_juegos;

    while (cantidad_de_juegos--)
    {
        int a, b;
        cin >> a >> b;

        cout << prefijo_factores[a] - prefijo_factores[b] << '\n';
    }

    return 0;
}