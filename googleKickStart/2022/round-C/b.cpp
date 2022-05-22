#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, X, Y;
    vector<int> res;
    cin >> N >> X >> Y;

    int Sn = N * (N + 1) / 2;
    if (Sn % (X + Y) != 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    cout << "POSSIBLE\n";
    int multiplier = Sn / (X + Y);
    int sum = 0;
    int expectedSum = multiplier * X;
    while (sum < expectedSum || N > 0)
    {
        if (!(sum + N > expectedSum))
        {
            res.push_back(N);
            sum += N;
        }
        N--;
    }
    cout << res.size() << "\n";
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i] << " ";
    cout << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}