#include <stdio.h>
#include<stdlib.h>

int max_of_four(int x, int y, int z, int t)
{
    if (x>y && x>z && x>t)
    {
        return x;
    }
    else if (y>x && y>z && y>t)
    {
        return y;
    }
    else if (z>x && z>y && z>t)
    {
        return z;
    }
    else if (t>x && t>y && t>z)
    {
        return t;
    }
    else 
    {
        return 0;
    }
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}