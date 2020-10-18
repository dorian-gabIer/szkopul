#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, c2 = 0, ntemp;
    cin >> n;
    ntemp = n;
    while(ntemp % 20 != 0) 
    {
        n++;
        c++;
    }
    while(n % 20 != 0) 
    {
        n--;
        c2++;
    }
    cout << min(c, c2);
    return 0;
}
