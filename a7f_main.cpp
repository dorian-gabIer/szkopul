#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cin >> n;
    while(n--)
    {
        cin >> temp;
        if(temp % 2 == 0 or temp >= 0) sum += temp;
    }
    cout << sum;
    return 0;
}
