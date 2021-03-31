/**
*    author:  zin9
*    created: 31.03.2021 22:38:02
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int t;
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        if (X != t)
        {
            if (flag)
            {
                cout << " ";
            }
            cout << t;
            flag = true;
        }
    }
    cout << endl;
    return 0;
}