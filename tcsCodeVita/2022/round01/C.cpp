#include <bits/stdc++.h>

using namespace std;
int main()
{

    // input and arranged
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
    string board[100];
    for (int i = 0; i < 10; i++)
    {
        board[i] = l10[i];
        board[10 + i] = l9[i];
        board[20 + i] = l8[i];
        board[30 + i] = l7[i];
        board[40 + i] = l6[i];
        board[50 + i] = l5[i];
        board[60 + i] = l4[i];
        board[70 + i] = l3[i];
        board[80 + i] = l2[i];
        board[90 + i] = l1[i];
    }

    for (int i = 0; i < 100; i++)
    {
        cout << board[i] << "\n";
    }

    // dice input
    vector<int> dice;
    string temp;
    getline(cin >> ws, temp);
    stringstream ss(temp);
    string word;
    while (ss >> word)
        cout << (stoi(word)) << "\t";
    cout << "\n";

    int playerPos = 0,
        snakeCount = 0, ladderCount = 0, finalPos = 0, curPos = 0;

    for (int i = 0; i < dice.size(); i++)
    {
        if (curPos == 99)
        {
            cout << "Possible"
                 << " " << snakeCount << " " << ladderCount;
        }
        else
        {
            cout << "Possible"
                 << " " << snakeCount << " " << ladderCount << finalPos;
        }

        // check for snake
        if (value[0] == 'S' and value[1] == '(')
        {
            int closeBracketPos = value.find(")");
            string stepCount;
            for (int i = 2; i < closeBracketPos; i++)
            {
                stepCount.push_back(value[i]);
            }

            // eaten by snake
            curPos = curPos - stoi(stepCount);
            finalPos = curPos;
            break;
        }

        // check for ladder

        if (value[0] == 'L' and value[1] == '(')
        {
            int closeBracketPos = value.find(")");
            string stepCount;
            for (int i = 2; i < closeBracketPos; i++)
            {
                stepCount.push_back(value[i]);
            }

            // took a ladder
            curPos = curPos + stoi(stepCount);
            finalPos = curPos;
            break;
        }

        // update position
        curPos = curPos + dice[i];
        finalPos = curPos;
    }

    cout << endl;

    return 0;
}