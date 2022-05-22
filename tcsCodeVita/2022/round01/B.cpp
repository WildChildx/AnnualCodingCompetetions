#include <iostream>
using namespace std;

int main()
{
    string input, ideal;
    cin >> input;
    if (input[0] == 'G')
    {
        for (int i = 0; i < (int)input.size(); i++)
        {
            if (i % 2 == 0)
            {
                ideal.push_back('G');
            }
            else
            {
                ideal.push_back('B');
            }
        }
    }
    else
    {
        for (int i = 0; i < (int)input.size(); i++)
        {
            if (i % 2 == 0)
            {
                ideal.push_back('B');
            }
            else
            {
                ideal.push_back('G');
            }
        }
    }

    // swap count
    int count = 0;
    for (int i = 0; i < (int)input.size(); i++)
    {
        if (input[i] != ideal[i])
        {
            count++;
        }
    }

    cout << count / 2;
}