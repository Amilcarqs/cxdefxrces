//Count Subarrays
// las conbinaciones posibles tal que (1 ≤ i ≤ j ≤ N), is a sequence of integers Ai, Ai + 1, ..., Aj.
//seran s = n(n+1)/2 

//luego con la regla de no decreciente, dividiremos el array en m arrays
//hallamos la suma de cada uno s_m1 = m1(m1+1)/2
//sumamos todo y lo resolvimos

#include <iostream>

using namespace std;

int sumatoria(int n){    
    return (n*(n+1))/2;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >>n;
        int A[n];
        int suma = 0;
        cin >> A[0];
        int contador = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> A[i];
            if (A[i-1] <= A[i])
            {
                contador ++;
            }else{
                suma += sumatoria(contador);
                contador = 1;
            }            
        }
        suma += sumatoria(contador);

        cout << suma << endl;
    } 
    return 0;
}