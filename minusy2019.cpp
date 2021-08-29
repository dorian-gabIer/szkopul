#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int c = 0, cmax = -1;
    cin >> str;
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i-1] == '-' && str[i] == '-')
        {
            str.erase (str.begin() + i);
            str[i-1] = '+';
        }
    }
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '+') c++;
        else
        {
            if(c > cmax) cmax = c;
            c = 0;
        }
    }
    cout << max(c, cmax);
    return 0;
}