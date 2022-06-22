// iska logic samja nahi bhai

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string kPeriodic(string s, int k)
    {
        int n = s.size();
        sort(s.begin(), s.end());
        vector<int> m(26);
        for (int i = 0; i < n; i++)
            m[s[i] - 'a']++;
        int sz = 0, id = 0;
        string ans = string(n, '_');
        // get value of sz to see if the permutation is possible
        while (ans[id] == '_')
        {
            sz++;
            ans[id] = '.';
            id += k;
            id %= n;
        }

        // check if possible
        for (auto it : m)
            if (it % sz != 0)
                return "-1";

        // if yes
        ans = string(n, '_');
        id = 0;
        int cnt = 0, val = 0;
        while (cnt != n)
        {
            while (ans[id] != '_')
                id++;
            while (!m[val])
                val++;
            while (ans[id] == '_')
            {
                cnt++;
                ans[id] = 'a' + val;
                id += k;
                id %= n;
            }
            m[val] -= sz;
        }

        // return ans;

        return "0";
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int K;
        cin >> K;
        Solution obj;
        string ans = obj.kPeriodic(s, K);
        if (ans.length() == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
} // } Driver Code Ends