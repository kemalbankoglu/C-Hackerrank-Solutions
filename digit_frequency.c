#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char tab[1000];
    gets(tab);
    int sifir_sayac = 0;
    int bir_sayac = 0;
    int iki_sayac = 0;
    int uc_sayac = 0;
    int dort_sayac = 0;
    int bes_sayac = 0;
    int alti_sayac = 0;
    int yedi_sayac = 0;
    int sekiz_sayac = 0;
    int dokuz_sayac = 0;
    
    for(int i=0;i<strlen(tab);i++)
    {
        if(tab[i] == '0')
        {
            sifir_sayac++;
        }
        if(tab[i]  == '1')
        {
            bir_sayac++;
        }
        if(tab[i]  == '2')
        {
            iki_sayac++;
        }
        if(tab[i]  == '3')
        {
            uc_sayac++;
        }
        if(tab[i]  == '4')
        {
            dort_sayac++;
        }
        if(tab[i]  == '5')
        {
            bes_sayac++;
        }
        if(tab[i]  == '6')
        {
            alti_sayac++;
        }
        if(tab[i]  == '7')
        {
            yedi_sayac++;
        }
        if(tab[i]  == '8')
        {
            sekiz_sayac++;
        }
        if(tab[i]  == '9')
        {
            dokuz_sayac++;
        }
        else 
        {
            continue;
        }
        
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d",sifir_sayac,bir_sayac,iki_sayac,uc_sayac,dort_sayac,bes_sayac,alti_sayac,yedi_sayac,sekiz_sayac,dokuz_sayac);
    return 0;
}
