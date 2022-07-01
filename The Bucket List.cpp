#include <bits/stdc++.h>
using namespace std;

struct cow {
    int s, f, b;
};

bool cmp(cow a, cow b)
{
    return (a.s < b.s);
}

bool intersect(cow a, cow b)
{
    return (a.f > b.s);
}

bool absent(int i, vector<int> v)
{
    int j;
    bool ans = true;
    for (j = 0; j < v.size(); j++)
    {
        if (v[j] == i)
        {
            ans = false;
            break;
        }
    }
    return ans;
}

int main()
{
    int n, s, f, b, i, j;
    cow cows[101];

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    cin>> n;

    for (i = 0; i < n; i++)
    {
        cin>> s >> f >> b;
        cows[i].s = s;
        cows[i].f = f;
        cows[i].b = b;
    }
    sort(cows, cows+n, cmp);

    // intersecting slots
    vector<int> v[101];
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (intersect(cows[i], cows[j]))
                v[j].push_back(i);
        }
    }

    int buckets[1001], cnt;
    memset(buckets, -1, sizeof(buckets));

    for (i = 0; i < n; i++)
    {
        cnt = 0;
        b = cows[i].b;
        for (j = 0; j < 1000; j++)
        {
            if (buckets[j] == -1 || absent(buckets[j], v[i]))
            {
                buckets[j] = i;
                cnt++;
            }

            if (cnt == b)
                break;
        }
    }

    for (i = 0; i < 1000; i++)
    {
        if (buckets[i] == -1)
        {
            cout<< i << "\n";
            break;
        }
    }

    return 0;
}






