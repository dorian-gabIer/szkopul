#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    short n, tmp;
    cin >> n;
    map <int, int> M;
    M[1] = 0, M[2] = 0, M[3] = 0, M[4] = 0, M[5] = 0, M[6] = 0;
    while(n--) cin >> tmp, M[tmp]++;
    for(auto x : M) cout << x.second << ' ';
    return 0;
}