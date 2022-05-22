#include <bits/stdc++.h>

using namespace std;

int arrGCD(vector<int> arr, int n)
{
    int hi = 0;
    for (int i = 0; i < n; i++)
        hi = max(hi, arr[i]);
    int count[hi + 1] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    int counter = 0;
    for (int i = hi; i >= 1; i--)
    {
        int j = i;
        counter = 0;
        while (j <= hi)
        {
            if (count[j] >= 2)
                return j;
            else if (count[j] == 1)
                counter++;
            j += i;
            if (counter == 2)
                return i;
        }
    }
    return 1;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    map<string, int> symbolTable;
    symbolTable.insert(pair<string, int>("A", 10));
    symbolTable.insert(pair<string, int>("B", 11));
    symbolTable.insert(pair<string, int>("C", 12));
    symbolTable.insert(pair<string, int>("D", 13));
    symbolTable.insert(pair<string, int>("E", 14));
    symbolTable.insert(pair<string, int>("F", 15));
    symbolTable.insert(pair<string, int>("G", 16));
    symbolTable.insert(pair<string, int>("H", 17));
    symbolTable.insert(pair<string, int>("I", 18));
    symbolTable.insert(pair<string, int>("J", 19));
    symbolTable.insert(pair<string, int>("K", 20));
    symbolTable.insert(pair<string, int>("L", 21));
    symbolTable.insert(pair<string, int>("M", 22));
    symbolTable.insert(pair<string, int>("N", 23));
    symbolTable.insert(pair<string, int>("O", 24));
    symbolTable.insert(pair<string, int>("P", 25));
    symbolTable.insert(pair<string, int>("Q", 26));
    symbolTable.insert(pair<string, int>("R", 27));
    symbolTable.insert(pair<string, int>("S", 28));
    symbolTable.insert(pair<string, int>("T", 29));
    symbolTable.insert(pair<string, int>("U", 30));
    symbolTable.insert(pair<string, int>("V", 31));
    symbolTable.insert(pair<string, int>("W", 32));
    symbolTable.insert(pair<string, int>("X", 33));
    symbolTable.insert(pair<string, int>("Y", 34));
    symbolTable.insert(pair<string, int>("Z", 35));
    symbolTable.insert(pair<string, int>("a", 36));
    symbolTable.insert(pair<string, int>("b", 37));
    symbolTable.insert(pair<string, int>("c", 38));
    symbolTable.insert(pair<string, int>("d", 39));
    symbolTable.insert(pair<string, int>("e", 40));
    symbolTable.insert(pair<string, int>("f", 41));
    symbolTable.insert(pair<string, int>("g", 42));
    symbolTable.insert(pair<string, int>("h", 43));
    symbolTable.insert(pair<string, int>("i", 44));
    symbolTable.insert(pair<string, int>("j", 45));
    symbolTable.insert(pair<string, int>("k", 46));
    symbolTable.insert(pair<string, int>("l", 47));
    symbolTable.insert(pair<string, int>("m", 48));
    symbolTable.insert(pair<string, int>("n", 49));
    symbolTable.insert(pair<string, int>("o", 50));
    symbolTable.insert(pair<string, int>("p", 51));
    symbolTable.insert(pair<string, int>("q", 52));
    symbolTable.insert(pair<string, int>("r", 53));
    symbolTable.insert(pair<string, int>("s", 54));
    symbolTable.insert(pair<string, int>("t", 55));
    symbolTable.insert(pair<string, int>("u", 56));
    symbolTable.insert(pair<string, int>("v", 57));
    symbolTable.insert(pair<string, int>("w", 58));
    symbolTable.insert(pair<string, int>("x", 59));
    symbolTable.insert(pair<string, int>("y", 60));
    symbolTable.insert(pair<string, int>("z", 61));
    string input;
    vector<int> reactivity;
    getline(cin >> ws, input);
    stringstream ss(input);
    string word;
    while (ss >> word)
    {
        if (word.size() > 1)
            reactivity.push_back(symbolTable.at(word.substr(0, 1)) * (symbolTable.at(word.substr(1, 1)) + 1) + symbolTable.at(word.substr(1, 1)));
        else
            reactivity.push_back(symbolTable.at(word.substr(0, 1)));
    }
    cout << arrGCD(reactivity, reactivity.size());
    return 0;
}