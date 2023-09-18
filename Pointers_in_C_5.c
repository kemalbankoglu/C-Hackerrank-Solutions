#include <stdio.h>

void update(int *a,int *b) {
    int sayi1,sayi2;  
    sayi1 = *a + *b;
    sayi2 = abs(*a - *b);  
    
    *a = sayi1;
    *b = sayi2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
                                
    return 0;
}
