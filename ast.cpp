#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tab[n+1];
    for(int i = 0; i < n; i++) cin >> tab[i];
    if(n == 1)
    {
        if(tab[0] == 15) cout << "DOWN";
        else if(tab[0] == 0) cout << "UP";
        else cout << "UNKNOWN";
        return 0;
    }
    if(tab[n-1] + 1 <= 15 && tab[n-1] > tab[n-2]) cout << "UP";
    else if(tab[n-1] + 1 > 15 && tab[n-1] > tab[n-2]) cout << "DOWN";
    else if(tab[n-1] - 1 >= 0 && tab[n-1] < tab[n-2]) cout << "DOWN";
    else if(tab[n-1] - 1 < 0 && tab[n-1] < tab[n-2]) cout << "UP";
    return 0;
}
