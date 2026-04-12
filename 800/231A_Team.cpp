#include <iostream>

using namespace std;

int main(){
    int n,a,b,c,cont;
    cin >> n;
    cont = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if((a+b+c)>1){
            cont++;
        }
    }
    cout << cont<< endl;    
}
//resuelto