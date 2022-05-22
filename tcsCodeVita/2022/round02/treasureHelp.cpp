#include <bits/stdc++.h>
using namespace std;

int mat[2500][500];

int knapSack(vector<int> value, vector<int> weight, int W, int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (mat[n][W] != -1) // memoization optimization
        return mat[n][W];
    if (wt[n - 1] <= W)
        return mat[n][W] = max(value[n - 1] + knapSack(value, weight, W - weight[n - 1], n - 1), knapSack(value, weight, W, n - 1));
    return mat[n][W] = knapSack(value, weight, W, n - 1);
}

void findTreasure()
{
    memset(mat, -1, sizeof(mat));
    int N, M, n, m, T;
    vector<int> value, weight;
    cin >> N >> M >> n >> m >> T;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            weight.push_back((abs(i - n) + abs(j - m)) * 2 + 1);
            int k;
            cin >> k;
            value.push_back(k);
        }
    cout << knapSack(value, weight, T, value.size());
    ;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    findTreasure();
    return 0;
}