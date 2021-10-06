#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void isDecent(int l)
{
    int tl = l;
    int c3 = -1, c5 = -1; 
    bool f = false;
    for(int i = 0; i < l; i++)
    { 
        if(i % 5 == 0 & tl % 3 == 0) c3 = i, c5 = tl, f = true;
        if(tl % 5 == 0 & i % 3 == 0) c5 = i, c3 = tl, f = true;
        tl--;
    }
    if(f)
    {
        for(int i = 0; i < c5; i++) cout << '5';
        for(int i = 0; i < c3; i++) cout << '3';
    }
    else cout << "-1";
    cout << endl;
}
int main()
{
    cout.tie(0);
    cin.tie(0);
    int t, tmp;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> tmp;
        isDecent(tmp);
    }
    return 0;
}