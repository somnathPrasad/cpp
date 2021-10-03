#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int t;
    cin >> t;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int r = 0, c = n - 1;
    bool found = false;

    while (r <= m && m >= 0)
    {
        if (a[r][c] == t)
        {
            found = true;
            break;
        }
        a[r][c] > t ? c-- : r++;
    }
    if (found)
    {
        cout << r << " " << c;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}