#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int find_nth_term(int n, int a, int b, int c)
{
    int i;
    int tab[n];
    tab[1] = a;
    tab[2] = b;
    tab[3] = c;

    for (i = 4; i <= n; i++)
    {

        tab[i] = tab[i-1] + tab[i-2] + tab[i-3];
    }
    
    return tab[n];

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}