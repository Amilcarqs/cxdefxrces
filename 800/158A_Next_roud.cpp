#include <iostream>
using namespace std;

int main()
{
    int n, k, score, advancers;
    cin >> n >> k;
    bool ya_ingreso_k = false;
    int valor_k;
    for (int i = 0; i < n; i++)
    {
        cin >> score;
        advancers = i;
        if (score <= 0){
            break;
        }
        if(i+1==k){
            valor_k = score;
        }
        if (i+1 > k && score < valor_k){
            break;
        }
    }
    if(score == valor_k){
        advancers++;
    }
    cout << advancers << endl;
    return 0;
}
//RESUELTO


/*
OPTIMIZADO POR CAHTGPT
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int score, limite = 0, advancers = 0;

    for (int i = 1; i <= n; i++) {
        cin >> score;

        if (i == k) {
            limite = score;
        }

        if (score > 0 && score >= limite) {
            advancers++;
        }
    }

    cout << advancers << endl;
    return 0;
}
*/

//RESUELTO