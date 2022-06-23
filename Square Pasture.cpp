#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8, i, j, a, b, large;

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    vector<int> x;
    vector<int> y;

    for (i = 1; i <= 4; i++)
    {
        cin>> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    large = max(x[3]-x[0], y[3]-y[0]);
    cout<< large*large << "\n";

    return 0;
}
