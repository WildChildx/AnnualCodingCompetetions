#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    string a;
    getline(cin, a);

    int cnt = 0;
    for (int i = 2; i < (int)a.length(); i = i + 2)
    {
        if (a[i] != a[0])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}