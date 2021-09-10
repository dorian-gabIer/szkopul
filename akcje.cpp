#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, maxa = -1;
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++) cin >> tab[i];
    for(int i = 0; i < n-1; i++) for(int j = i+1; j < n; j++) if(tab[j]-tab[i]> maxa) maxa = tab[j]-tab[i];
    if(maxa > 0) cout << maxa;
    else cout << 0;
    return 0;
}