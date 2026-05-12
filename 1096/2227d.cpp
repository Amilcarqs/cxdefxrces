#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n,x;
        cin >> n;
        vector<int> posL(n,0);
        vector<int> posR(n,0);
        
        for (int i = 1; i <= 2*n; i++)
        {
            cin >> x;
            if (posL[x] == 0)
            {
                posL[x] = i;
            }else
            {
                posR[x] =  i;
            }
        }
        int L = 2*n, R=-1;
            int answer = 0;
            for (int k = 0; k < n; k++)
            {
                L = min(L, posL[k]);
                R = max(R, posR[k]);
                int length = R - L + 1;
                if (length == 2 * (k + 1)) {
                    answer = k + 1;
                }
        }
        cout << answer << '\n';              
    }    
    return 0;
}

//Palindromex
