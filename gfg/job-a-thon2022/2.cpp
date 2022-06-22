// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int count(int N, vector<vector<int>> A, vector<vector<int>> B)
    {
        // algo
        // if number of 1's in first = number of 1's in second (possible)
        // minimum number of swaps = number of misplaced 1's

        int countA = 0, countB = 0, swaps = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (A[i][j] == 1)
                {
                    countA++;
                }
                if (B[i][j] == 1)
                {
                    countB++;
                }
            }
        }

        if (countA == countB)
        {

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (A[i][j] == 1 && B[i][j] == 0)
                    {
                        swaps++;
                    }
                }
            }

            return swaps;
        }

        return -1;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> A(N, vector<int>(N));
        vector<vector<int>> B(N, vector<int>(N));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> B[i][j];
            }
        }
        Solution obj;
        auto ans = obj.count(N, A, B);
        cout << ans << endl;
    }
} // } Driver Code Ends