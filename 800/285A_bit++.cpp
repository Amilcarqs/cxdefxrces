#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string statment;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> statment;
        if (statment.find("-") != string::npos){
            x --;
            //cout << "-" <<endl;
        }else{
            x++;
            //cout << "+" << endl;
        }
    }
    cout << x;
    
    return 0;
}
//resuelto
/*
string::npos es un valor especial en C++ que significa:

🧠 “no se encontró nada”

texto.find("algo")

Devuelve:

📍 la posición (índice) si lo encuentra
❌ string::npos si NO lo encuentra

Problema:
Si lo encuentra en posición 0, find() devuelve 0
En C++, 0 se interpreta como false
Entonces el if puede fallar aunque sí exista
*/

