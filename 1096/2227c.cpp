#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> a;
        vector<int> b;
        vector<int> c;
        vector<int> d;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i]%6==0)
            {
                a.push_back(v[i]);
            }else if(v[i]%2==0){
                b.push_back(v[i]);
            }else if(v[i]%3==0){
                c.push_back(v[i]);
            }else{
                d.push_back(v[i]);
            }            
        }

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] <<" ";
        }
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i]  <<" ";
        }
        for (int i = 0; i < d.size(); i++)
        {
            cout << d[i] <<" ";
        }  
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i]  <<" ";
        }
        cout << endl;
              
    }
    
    return 0;
}

//resuelto
//snowfall