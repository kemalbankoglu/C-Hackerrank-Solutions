#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a1,b1;
    float a2,b2;
    
    scanf("%d %d",&a1,&b1);
    scanf("%f %f",&a2,&b2);
    
    int sum1,diff1;
    float sum2,diff2;
    
    sum1 = a1 + b1;
    diff1 = a1 - b1;
    sum2 = a2 + b2;
    diff2 = a2 - b2;
    
    printf("%d %d\n",sum1,diff1);
    printf("%.1f %.1f",sum2,diff2);
    
    
    
    
    return 0;
}