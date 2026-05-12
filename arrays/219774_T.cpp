//Matriz

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n][n];
    int suma1 = 0;
    int suma2 = 0;
    int auxf = 0;
    int auxc = n-1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if (i==j)
            {
                suma1 += A[i][j];
            } 
            if (auxf == i && j== auxc)
            {
                suma2 += A[i][j];
                auxf++;
                auxc--;
            }           
        }
    }
    int resultado = abs(suma1-suma2);
    cout << resultado;
    return 0;
}