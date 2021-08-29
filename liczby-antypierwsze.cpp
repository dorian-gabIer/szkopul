#include <bits/stdc++.h>
using namespace std;
int divCount(int n)
{
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++) if (hash[p] == true) for (int i = p * 2; i < n; i += p) hash[i] = false;
    int total = 1;
    for (int p = 2; p <= n; p++) 
    {
        if (hash[p]) 
        {
            int count = 0;
            if (n % p == 0) 
            {
                while (n % p == 0) n = n / p, count++;
                total = total * (count + 1);
            }
        }
    }
    return total;
}
bool antypierwsza(int N)
{
    int NdivCount = divCount(N);
    for (int i = 1; i < N; i++) 
    {
        int idivCount = divCount(i);
        if (idivCount >= NdivCount) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    n++;
    while(n--) if(antypierwsza(n)) break;
    cout << n;
}