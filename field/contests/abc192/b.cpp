/**
*    author:  zin9
*    created: 02.04.2021 19:06:22
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (isupper(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            if (!isupper(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}