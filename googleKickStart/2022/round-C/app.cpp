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
        for (int j = 0; j < password.size(); j++)
        {
            if (islower(password[j]))
                break;
            else
            {
                password.push_back('a');
                break;
            }
        }

        for (int j = 0; j < password.size(); j++)
        {
            if (isupper(password[j]))
                break;
            else
            {
                password.push_back('A');
                break;
            }
        }

        for (int j = 0; j < password.size(); j++)
        {
            regex str_expr1(".*[0-9]+.*");
            if (!regex_match(password, str_expr1))
            {
                password += '1';
                break;
            }
        }

        for (int j = 0; j < password.size(); j++)
        {
            if (password[j] == '#' || password[j] == '*' || password[j] == '&' || password[j] == '@')
                break;
            else
            {
                password.push_back('#');
                break;
            }
        }

        if (password.size() < 7)
        {
            for (int i = password.size(); i < 8; i++)
            {
                password.push_back('2');
            }
        }
        cout << "Case #" << n << ": " << password << "\n";
    }

    return 0;
}