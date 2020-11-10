#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n == 0 or n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i*i <= n; i++) if(n % i == 0) return false;
    return true;
}
bool primedigits(int n)
{
    if(!prime(n)) return false;
    int sum = 0;
    while(n) 
    {
        sum += n%10;
        n /= 10;
    }
    if(prime(sum)) return true;
    else return false;
}
int main()
{
    int n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        c = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++) if(primedigits(j)) c++;
        cout << c << endl;
    }
    return 0;
}
