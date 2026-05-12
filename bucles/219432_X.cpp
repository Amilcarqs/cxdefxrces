// Convert to decimal 2

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        long long n; cin>>n;
        //long long binario = 0;
        int numero_final = 0;
        int indice = 0;
        while (n>0)
        {
            if (n%2==1)
            {
                //binario += pow(10,indice);
                numero_final |= (1<<indice);
                indice ++;
            }
            n /= 2;

        }
        cout << numero_final <<endl;
        
    }    
    return 0;
}