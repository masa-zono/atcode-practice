/**
*    author:  zin9
*    created: 30.01.2021 21:00:42
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = true;
    if (a == b)
    {
        if (c == 0)
            ans = false;
    }
    else
    {
        if (a < b)
            ans = false;
    }
    puts(ans ? "Takahashi" : "Aoki");
    return 0;
}