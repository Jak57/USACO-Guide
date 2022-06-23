#include<bits/stdc++.h>
using namespace std;

int intersect(int a, int b, int c, int d)
{
    int len;
    len = max((min(b, d)-max(a, c)), 0);

    return len;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, area1, area2, len, area3, x_intersect, y_intersect;

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    cin>> x1 >> y1 >> x2 >> y2;
    cin>> x3 >> y3 >> x4 >> y4;
    cin>> x5 >> y5 >> x6 >> y6;

    area1 = (x2-x1)*(y2-y1);
    area2 = (x4-x3)*(y4-y3);
    area3 = (x6-x5)*(y6-y5);

    x_intersect = intersect(x1, x2, x5, x6);
    y_intersect = intersect(y1, y2, y5, y6);
    area1 -= (x_intersect*y_intersect);

    x_intersect = intersect(x3, x4, x5, x6);
    y_intersect = intersect(y3, y4, y5, y6);
    area2 -= (x_intersect*y_intersect);

    cout<< area1+area2 << "\n";

    return 0;
}
