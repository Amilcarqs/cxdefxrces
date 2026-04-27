#include <iostream>
#include <list>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, h_i, x_i;
        cin >> n;
        //h y x almacenan los valores de altura y distancia
        // los aux almacenan los mismos valores pero a la inversa, para hacer la prueba empujando en ultimo domino hacia el primero
        int h[n], aux_h[n];
        int x[n-1], aux_x[n];
        bool caer = true;
        for (int j = 0; j < n; j++)
        {
            cin >> h_i;
            h[j] = h_i;
            aux_h[n-j-1] = h_i;
        }
        for (int j = 0; j < n-1; j++)
        {
            cin >> x_i;
            x[j] = x_i;
            aux_x[n-j-2] = x_i;
        }
        
        for (int j = 0; j < n-1; j++)
        {
            if(h[j] > x[j]){
                caer = true;
                if((h[j] - x[j]) > h[j+1]){
                    h[j+1] = h[j] - x[j];
                }
            }else{
                caer = false;
                break;
            }
        }
        //cout << "primera prueba: " << caer<<endl;

        if (!caer){ //esto es para probar a la inversa, empujando lso dominos del ultimoa al primero
            for (int j = 0; j < n-1; j++)
            {
                if(aux_h[j] > aux_x[j]){
                    caer = true;
                    if((aux_h[j] - aux_x[j]) > aux_h[j+1]){
                        aux_h[j+1] = aux_h[j] - aux_x[j];
                    }
                }else{
                    caer = false;
                    break;
                }
            }
        }
        
        if (caer)
        {
            cout << "habibi" << endl;
        }else{
            cout << "which" << endl;
        }
    }
    return 0;
}