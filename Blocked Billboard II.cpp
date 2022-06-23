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
    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, area1;
    int area2, len, area3, x_intersect, y_intersect, x_b, y_b;
    int bl_x, bl_y, tr_x, tr_y;

    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    cin>> x1 >> y1 >> x2 >> y2;
    cin>> x5 >> y5 >> x6 >> y6;

    area1 = (x2-x1)*(y2-y1);
    area3 = (x6-x5)*(y6-y5);
    x_b = x2-x1;
    y_b = y2-y1;

    x_intersect = intersect(x1, x2, x5, x6);
    y_intersect = intersect(y1, y2, y5, y6);

    if (x_intersect > 0 && y_intersect > 0)
    {
        if (x_intersect < (x2-x1) && y_intersect < (y2-y1))
            cout<< area1 << "\n";
        else if (x_b == x_intersect && y_b == y_intersect)
            cout<< "0" << "\n";
        else
        {
            bl_x = max(x1, x5);
            bl_y = max(y1, y5);

            tr_x = min(x2, x6);
            tr_y = min(y2, y6);

            if ((bl_x == x1 && bl_y == y1) || (tr_x == x2 && tr_y == y2))
                cout<< area1 - x_intersect*y_intersect << "\n";
            else
                cout<< area1 << "\n";
        }
    }
    else
        cout<< area1 << "\n";

    return 0;
}
