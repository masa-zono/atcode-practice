/**
*    author:  zin9
*    created: 30.01.2021 18:26:25
**/

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    vector<int> a(100001);
    vector<int> b(100001);
    cin >> n;
    int size = (int)pow(2, n);
    for (int i = 0; i < size + 1; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    std::sort(a.begin(), a.begin() + size / 2);
    std::sort(a.begin() + size / 2, a.end());
    std::vector<int>::iterator first = a.end() - 1;
    std::vector<int>::iterator second = a.begin() + size / 2 - 1;
    int ansR = min(*first, *second);
    cout << distance(b.begin(), find(b.begin(), b.end(), ansR)) + 1 << endl;
    return 0;
}