#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++ code here
    string l1[10], l2[10], l3[10], l4[10], l5[10], l6[10], l7[10], l8[10], l9[10], l10[10];
    for (int i = 9; i >= 0; i--)
    {
        cin >> l1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> l2[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cin >> l3[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> l4[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cin >> l5[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> l6[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cin >> l7[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> l8[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cin >> l9[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> l10[i];
    }
    string final[100];
    for (int i = 0; i < 10; i++)
    {
        final[i] = l10[i];
        final[10 + i] = l9[i];
        final[20 + i] = l8[i];
        final[30 + i] = l7[i];
        final[40 + i] = l6[i];
        final[50 + i] = l5[i];
        final[60 + i] = l4[i];
        final[70 + i] = l3[i];
        final[80 + i] = l2[i];
        final[90 + i] = l1[i];
    }

    for (int i = 0; i < 100; i++)
    {
        cout << final[i] << "\n";
    }

    return 0;
}