#include <bits/stdc++.h>
using namespace std;

int camino(int s, int e){
    if(s==e) { return 1;}
    if (s>e){return 0;}
    else{
        return camino(s+1,e)+camino(s+2,e)+camino(s+3,e);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,e;
    cin >> s >> e;
    cout << camino(s,e);
    return 0;
}