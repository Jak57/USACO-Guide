#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, g, arr1[4], arr2[4], arr3[4];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, i, temp, large;

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    cin>> n;

    arr1[1] = 1;
    arr1[2] = arr1[3] = 0;

    arr2[2] = 1;
    arr2[1] = arr2[3] = 0;

    arr3[3] = 1;
    arr3[1] = arr3[2] = 0;

    for (i = 0; i < n; i++)
    {
        cin>> a >> b >> g;

        // swapping for shell 1
        temp = arr1[a];
        arr1[a] = arr1[b];
        arr1[b] = temp;
        cnt1 += arr1[g];

        // swapping for shell 2
        temp = arr2[a];
        arr2[a] = arr2[b];
        arr2[b] = temp;
        cnt2 += arr2[g];

        // swapping for shell 3
        temp = arr3[a];
        arr3[a] = arr3[b];
        arr3[b] = temp;
        cnt3 += arr3[g];
    }

    large = max(cnt1, cnt2);
    large = max(large, cnt3);
    cout<< large << "\n";

    return 0;
}
