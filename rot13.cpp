#include <bits/stdc++.h>
using namespace std;
string ROT13(string text)
{
    for (int i = 0; i < text.length(); i++) text[i] = char(int(text[i]-84) % 26 +97);
    return text;
}
int main()
{
    int n, c = 0;
    cin >> n;
    string tab[n];
    for(int i = 0; i < n; i++) cin >> tab[i];
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                string tmp1 = ROT13(tab[i]);
                string tmp2 = ROT13(tab[j]);
                if((tmp1+tmp2) == tab[j] + tab[i] || (tmp2+tmp1) == tab[i] + tab[j]) c++;
            }
        }
    }
    cout << c;
    return 0;
}