#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, c = 0;
    cin >> n;
    stack <int> S;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        while(!S.empty() && S.top() > b) S.pop();
        if(S.empty() || S.top() < b)
        {
            S.push(b);
            c++;
        }
    }
    cout << c;
    return 0;
}