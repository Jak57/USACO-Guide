#include<bits/stdc++.h>
using namespace std;

struct police {
    int start, stop;
    int limit;
};

struct bessie {
    int start, stop;
    int limit;
};

int main()
{
    int n, m, i, j, total, seg, limit, start, stop, sum, start1, stop1, limit1;
    police info_p[200];
    bessie info_b[200];

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    cin>> n >> m;

    stop = 0;
    for (i = 1; i <= n; i++)
    {
        cin>> seg >> limit;
        stop += seg;
        start = stop - seg + 1;

        info_p[i].start = start;
        info_p[i].stop = stop;
        info_p[i].limit = limit;
    }

    stop = 0;
    for (i = 1; i <= m; i++)
    {
        cin>> seg >> limit;
        stop += seg;
        start = stop - seg + 1;

        info_b[i].start = start;
        info_b[i].stop = stop;
        info_b[i].limit = limit;
    }

    total = 0;
    for (i = 1; i <= n; i++)
    {
        start1 = info_p[i].start;
        stop1 = info_p[i].stop;
        limit1 = info_p[i].limit;

        for (j = 1; j <= m; j++)
        {
            start = info_b[j].start;
            stop = info_b[j].stop;
            limit = info_b[j].limit;

            if (stop < start1 || start > stop1)
                continue;
            else
            {
                if (limit > limit1)
                {
                    total = max(total, limit - limit1);
                }
            }
        }
    }

    cout<< total << "\n";

    return 0;
}
