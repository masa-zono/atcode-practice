/**
*    author:  zin9
*    created: 30.01.2021 18:21:44
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[100001], b[100001];
    long int naiseki = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        naiseki += a[i] * b[i];
    }
    puts(naiseki == 0 ? "Yes" : "No");
    return 0;
}