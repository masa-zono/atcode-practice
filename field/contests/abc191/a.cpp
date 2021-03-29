/**
*    author:  zin9
*    created: 29.03.2021 22:53:16
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (d >= t * v && d <= v * s)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}