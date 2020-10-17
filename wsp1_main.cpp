#include <bits/stdc++.h>
using namespace std;
bool kryterium(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int moce[n];
    for(int i = 0; i < n; i++) cin >> moce[i];
    sort(moce, moce+n, kryterium);
    for(int i = 0; i < 10 && i < n; i++) cout << moce[i] << " ";
    return 0;
}
