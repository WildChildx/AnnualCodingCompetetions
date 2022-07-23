// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string solve(int N, vector<int> &A)
    {
        /*{-6,6,-6,6,-6,6,6}
        here subarrays are {-6,6},{-6,6},{-6,6},{6,6}
        sum of last subarray is not 0 hence print NO
        first check the sum of consecutive subarrays if they add upto 0 if not print NO*/
        for (int i = 0; i < (N % 2 == 0 ? N : N - 1); i += 2)
            if ((A[i] + A[i + 1]) != 0)
                return "NO";
        // if length is odd , then consider the sum of elements of last subarray's sum
        if (N % 2 != 0 && (A[N - 1] + A[N - 2] != 0))
            return "NO";
        return "YES";
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        Solution obj;
        cout << obj.solve(N, A) << "\n";
    }
} // } Driver Code Ends