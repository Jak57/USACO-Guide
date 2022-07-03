#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, x, y, arr[26], a1[26], a2[26], val;
    string s1, s2;
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    cin>> n;

    memset(arr, 0, sizeof(arr));
    for (i = 0; i < n; i++)
    {
        cin>> s1 >> s2;
        memset(a1, 0, sizeof(a1));
        memset(a2, 0, sizeof(a2));

        for (j = 0; j < s1.size(); j++)
        {
            val = s1[j]-'a';
            a1[val] += 1;
        }

        for (j = 0; j < s2.size(); j++)
        {
            val = s2[j]-'a';
            a2[val] += 1;
        }

        for (j = 0; j < 26; j++)
        {
            if (a1[j] > 0 && a2[j] > 0)
                arr[j] += max(a1[j], a2[j]);
            else
                arr[j] += (a1[j]+a2[j]);
        }
    }

    for (i = 0; i < 26; i++)
        cout<< arr[i] << "\n";

    return 0;
}
