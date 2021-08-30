#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string tmp2, tmp;
    map <string, set<string>> M;
    set <string> finala;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp2;
        tmp = tmp2;
        sort(tmp.begin(), tmp.end());
        M[tmp].insert(tmp2);
    }
    for(auto elem : M)
    {
        string tempo = "";
        for(auto ite : elem.second) tempo += (ite + ' ');
        finala.insert(tempo);
    }
    for(auto elem : finala) cout << elem << '\n';
    return 0;
}