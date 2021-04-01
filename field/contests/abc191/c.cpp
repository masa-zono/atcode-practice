/**
*    author:  zin9
*    created: 02.04.2021 03:49:36
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    char s[10][10];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j < w; j++)
        {
            int t = 0;
            if (s[i - 1][j - 1] == '#')
                t++;
            if (s[i][j - 1] == '#')
                t++;
            if (s[i - 1][j] == '#')
                t++;
            if (s[i][j] == '#')
                t++;
            if (t == 1 || t == 3)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}