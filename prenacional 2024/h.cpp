#include <iostream>

using namespace std;

int main(){
    string cadena ;

    cin >> cadena;
    int punto_actual = 0;
    int punto_alto = 0;
    int indice = 0;

    for (int i = 0; i< (int)cadena.size(); i++)
    {
        //cout<<c<<" ";
        if(cadena[i] == '+'){
            punto_actual ++;
        }else{
            punto_actual--;
        }
        if (punto_actual>punto_alto) {
            punto_alto = punto_actual;
            indice = i+1;
        }
    }
    cout << indice;
    return 0;
}
//resuelto
