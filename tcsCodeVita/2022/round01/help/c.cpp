#include <bits/stdc++.h>
using namespace std;

int extractInt(string s)
{
    int n = s.size();

    string tillNow = "";

    for (int i = 0; i < n; i++)
    {

        if (s[i] - '0' >= 0 and s[i] - '0' <= 9)
        {
            tillNow += s[i];
        }

        else
        {
            if (tillNow.size() > 0)
            {
                return stoi(tillNow);
                tillNow = "";
            }
        }
    }

    if (tillNow.size() > 0)
    {
        return stoi(tillNow);
    }
    return 0;
}

int main()
{

    string s[10][10];
    for (int i = 9; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> s[i][j];
            }
        }
        else
        {
            for (int j = 9; j >= 0; j--)
            {
                cin >> s[i][j];
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == "End")
            {
                s[i][j] = "100";
            }
            if (s[i][j] == "Start")
            {
                s[i][j] = "1";
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j].length() >= 4)
            {
                s[i][j] = to_string(extractInt(s[i][j]) * (-1));
            }
        }
    }

    int die;
    int loc = 0;

    while (1)
    {
        cin >> die;
        if (loc == 94)
        {
            if (die <= 6)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        if (loc == 95)
        {
            if (die <= 5)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        if (loc == 96)
        {
            if (die <= 4)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        if (loc == 97)
        {
            if (die <= 3)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        if (loc == 98)
        {
            if (die <= 2)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        if (loc == 99)
        {
            if (die <= 1)
            {
                loc = loc + die;
                int m = loc / 10;
                int n = loc % 10 - 1;

                if (stoi(s[m][n]) < 0)
                {
                    loc = abs(stoi(s[m][n]));
                }
            }
        }
        else
        {
            loc = loc + die;
            int m = loc / 10;
            int n = loc % 10 - 1;

            if (stoi(s[m][n]) < 0)
            {
                loc = abs(stoi(s[m][n]));
            }
        }
        if (die == 1)
        {
            break;
        }
    }
    if (loc == 100)
    {
        cout << "Possible";
    }
    else
    {
        cout << "Not possible"
             << " " << loc;
    }
    return 0;
}