#include <iostream>
using namespace std;
int main() 
{
    int peso;
    cin >> peso;
    if((peso&1)==0 && peso>2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
//resuelto