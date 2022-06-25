#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1, m1, c2, m2, c3, m3, i, n = 100, amount;

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    cin>> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

    for (i = 1; i <= 33; i++)
    {
        // Bucket 1 & 2
        amount = min(m1, c2-m2);
        m1 -= amount;
        m2 += amount;

        // Bucket 2 & 3
        amount = min(m2, c3-m3);
        m2 -= amount;
        m3 += amount;

        // Bucket 3 & 1
        amount = min(m3, c1-m1);
        m3 -= amount;
        m1 += amount;
    }

    // Bucket 1 & 2
    amount = min(m1, c2-m2);
    m1 -= amount;
    m2 += amount;

    cout<< m1 << "\n";
    cout<< m2 << "\n";
    cout<< m3 << "\n";

    return 0;
}

