#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s; 
        if(s.length() > 10){
            string ini,fin;
            ini = s.substr(0,1);
            fin = s.substr(s.size()-1);
            cout << ini<<s.size()-2<<fin<< endl;
        }else{
            cout << s <<endl;
        }
    }    
}
//RESUELTO