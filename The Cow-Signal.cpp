#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k, i, j, u, v;
    string s;
    char ch, arr[20][20];

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    cin>> m >> n >> k;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
            cin>> arr[i][j];
    }

    for (i = 1; i <= m; i++)
    {
        s = "";
        for (j = 1; j <= n; j++)
        {
            ch = arr[i][j];
            for (u = 1; u <= k; u++)
                s += ch;
        }

        for (j = 1; j <= k; j++)
            cout<< s << "\n";
    }

    return 0;
}
