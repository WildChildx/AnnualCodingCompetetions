#include <iostream>
#include <regex>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string password;
        cin >> password;
        if (password.size() < 7)
        {
            for (int j = password.size(); j < 8; j++)
            {

                password.push_back('1');
            }
        }

        if (password.size() >= 7)
        {
            // check for small characters
            regex pattern("[a-zA-Z0-9#@*&]+");
            if (!regex_match(password, pattern))
            {
                string correction = "aA0#";
                password.append(correction);
            }
        }

        cout << "Case #" << n << ": " << password << "\n";
    }

    return 0;
}