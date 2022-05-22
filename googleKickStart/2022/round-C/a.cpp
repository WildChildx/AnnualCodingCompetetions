#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    string password;
    cin >> N >> password;
    regex password_expr1(".*[0-9]+.*");
    regex password_expr2(".*[a-z]+.*");
    regex password_expr3(".*[A-Z]+.*");
    regex password_expr4(".*[#@*&]+.*");
    if (!regex_match(password, password_expr1))
        password += '1';
    if (!regex_match(password, password_expr2))
        password += 'a';
    if (!regex_match(password, password_expr3))
        password += 'A';
    if (!regex_match(password, password_expr4))
        password += '&';
    while (password.length() < 7)
        password += '1';
    cout << password << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}