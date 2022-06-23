#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    cin>> a >> b >> c >> d;

    if (b < c || d < a)
        cout<< (b-a)+(d-c) << "\n";
    else if (a <= c && d <= b)
        cout<< b-a << "\n";
    else if (c <= a && b <= d)
        cout<< d-c << "\n";
    else if (a <= c)
        cout<< d-a << "\n";
    else if (c <= a)
        cout<< b-c << "\n";

    return 0;
}


// Another Solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, arr[105], i, j, sum = 0;

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    cin>> a >> b;
    cin >> c >> d;

    memset(arr, 0, sizeof(arr));
    for (i = a+1; i <= b; i++)
        arr[i] = 1;

    for (i = c+1; i <= d; i++)
        arr[i] = 1;

    for (i = 0; i <= 100; i++)
    {
        sum += arr[i];
    }
    cout<< sum << "\n";

    return 0;
}
