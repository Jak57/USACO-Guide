#include<bits/stdc++.h>
using namespace std;

struct cow {
    int index;
    int id;
};

bool cmp(cow a, cow b)
{
    return (a.index <= b.index);
}

int main()
{
    int n, condition[101], i, j, val, u_val, index, id;
    int shuffle[4][105], ids[101];
    cow cows[105];

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    cin>> n;

    for (i = 1; i <= n; i++)
        cin>> condition[i];

    for (i = 1; i <= n; i++)
        cin>> ids[i];

    for (i = 1; i <= n; i++)
        shuffle[0][i] = i;

    for (i = 0; i <= 3; i++)
        shuffle[i][0] = 0;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            val = condition[j];
            u_val = shuffle[i-1][j];
            shuffle[i][val] = u_val;
        }
    }

    for (i = 1; i <= n; i++)
    {
        id = ids[i];
        index = shuffle[3][i];
        cows[i-1].id = id;
        cows[i-1].index = index;
    }

    sort(cows, cows+n, cmp);
    for (i = 0; i < n; i++)
        printf("%d\n", cows[i].id);

    return 0;
}


