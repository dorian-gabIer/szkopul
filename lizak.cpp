#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, q, k, suma = 0;
    string str;
    map <int, pair<int, int>> M;
    cin >> s >> q;
    cin >> str;
    for(int j = 0; j < s; j++) 
    {
        suma = 0;
        for(int g = j; g < s; g++)
        {
            if(str[g] == 'T') suma += 2;
            else suma++;
            M[suma] = {j+1, g+1};
        }
    }
    for(int i = 0; i < q; i++) 
    {
        cin >> k;
        if(M[k].first < 1 || M[k].second < 1) cout << "NIE\n";
        else cout << M[k].first << ' ' << M[k].second << '\n';
    }
    return 0;
}