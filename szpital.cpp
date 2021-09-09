#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string tmp;
    queue <string> pacjenci;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        if(tmp == "nowy")
        {
            cin >> tmp;
            pacjenci.push(tmp);
        }
        else if(tmp == "zawolaj")
        {
            cout << pacjenci.front() << '\n';
            pacjenci.pop();
        }
        else cout << pacjenci.size() << '\n';
    }
    return 0;
}