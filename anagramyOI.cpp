#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map <string, set<string>> mapka; 
    int n;
    cin >> n;
    string tab[n];
    vector <string> vec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> tab[i];
        string tmp = tab[i];
        sort(tmp.begin(), tmp.end());
        mapka[tmp].insert(tab[i]);
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                string tmp2 = tab[j];
                sort(tmp2.begin(), tmp2.end());
                if(tmp == tmp2) mapka[tmp].insert(tab[j]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        string tmp = tab[i], res = "";
        sort(tmp.begin(), tmp.end());
        if(!mapka[tmp].count("2137")) 
        {
            for (auto elem: mapka[tmp]) 
            {
                res += (elem + ' ');
            }
            if(res != "") vec.push_back(res);
        }
        mapka[tmp].insert("2137");
    }
    sort(vec.begin(), vec.end());
    for(auto elem : vec) if(elem != "") cout << elem << endl;
    return 0;
}