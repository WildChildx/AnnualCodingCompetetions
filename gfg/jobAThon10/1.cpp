// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int solve(int N, int y, vector<int> vec)
    {
        // code here
        // Define an map
        map<int, int> M;

        // Traverse vector vec check if
        // current element is present
        // or not
        for (int i = 0; i < N; i++)
        {

            // If the current element
            // is not found then insert
            // current element with
            // frequency 1
            if (M.find(vec[i]) == M.end())
            {
                M[vec[i]] = 1;
            }

            // Else update the frequency
            else
            {
                M[vec[i]]++;
            }
        }

        // Traverse the map to print the
        // frequency
        vector<int> ans;
        for (auto &it : M)
        {
            ans.push_back(it.second);
        }

        // cout<<(int)*max_element(ans.begin(),ans.end());

        return (int)*max_element(ans.begin(), ans.end());
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, y;
        cin >> N >> y;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.solve(N, y, A) << "\n";
    }
    return 0;
}
// } Driver Code Ends