#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, arr[1005], k, sum, small;
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    cin>> n;

    for (i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    small = INT_MAX;
    for (i = 0; i < n; i++)
    {
        k = 0;
        sum = 0;
        for (j = i; j < i+n; j++)
        {
            sum += (arr[j%n]*k);
            k++;
        }

        small = min(small, sum);
    }
    cout<< small << "\n";

    return 0;
}
