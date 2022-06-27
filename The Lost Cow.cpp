#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll x, y, pow, start, stop, small, large, total = 0;
    int i;

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    cin>> x >> y;

    pow = 1;
    start = x;
    for (i = 1; ; i++)
    {
        if (i%2 == 1)
            stop = x+pow;
        else
            stop = x-pow;

        if (start < stop)
        {
            small = start;
            large = stop;
        }
        else
        {
            small = stop;
            large = start;
        }

        if (y >= small && y <= large)
        {
            if (i%2 == 1)
                total += (y-start);
            else
                total += (start-y);
            cout<< total << "\n";
            break;
        }
        else
        {
            total += (large-small);
        }

        pow *= 2;
        start = stop;
    }

    return 0;
}


