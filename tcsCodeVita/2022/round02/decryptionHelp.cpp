#include <bits/stdc++.h>
using namespace std;

string getRightPaddingString(string const &str, int n, char paddedChar = ' ')
{
    ostringstream ss;
    ss << left << setfill(paddedChar) << setw(n) << str;
    return ss.str();
}

vector<vector<int>> rotate(vector<vector<int>> M)
{
    vector<vector<int>> mat{
        {M[3][0], M[2][0], M[1][0], M[0][0]},
        {M[3][1], M[1][2], M[2][2], M[0][1]},
        {M[3][2], M[1][1], M[2][1], M[0][2]},
        {M[3][3], M[1][3], M[2][3], M[0][3]}
    };
    return mat;
}

int main()
{

    string inputString, keyString;
    cin >> inputString >> keyString;

    if (16 < inputString.size() && inputString.size() < 32)
    {
        int width = 32;
        inputString = getRightPaddingString(inputString, width, '0');
        int Me1[4][4], Me2[4][4], count = 0;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
            {
                Me1[i][j] = inputString[count];
                count++;
            }
        count = 16;

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
            {
                Me2[i][j] = inputString[count];
                count++;
            }
    }
    int Me[4][4];
    if (inputString.size() < 16)
    {
        int width = 16;
        inputString = getRightPaddingString(inputString, width, ' ');
        int count = 0;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
            {
                Me[i][j] = inputString[count];
                count++;
            }
    }

    if (keyString.size() < 16)
    {
        int width = 16;
        keyString = getRightPaddingString(keyString, width, ' ');
        int Mk[4][4], count = 0;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                Mk[i][j] = keyString[count];
                count++;

        vector<vector<int>> temp(4, vector<int>(4, 0));

        for (unsigned i = 0; i < 4; i++)
            for (unsigned j = 0; j < 4; j++)
                temp[i][j] = Mk[i][j];
        temp = rotate(temp);

        int Mrk[4][4];
        for (unsigned i = 0; i < 4; i++)
            for (unsigned j = 0; j < 4; j++)
                Mrk[i][j] = temp[i][j];

        int Mans[4][4];
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                Mans[i][j] = Me[i][j] ^ Mrk[i][j];

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                Mk[i][j] = Mk[i][j] ^ Mans[i][j];

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                Mk[i][j] = Mk[i][j] ^ 4;


        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                cout << char(Mk[i][j]);
    }
    return 0;
}