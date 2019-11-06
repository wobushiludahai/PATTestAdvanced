/**
 * @description: 1002 A+B for Polynomials
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int temp;
double resulta[1005] = {0};
int Itemp;
double ftemp;
int count = 0;

int main(void)
{
    scanf("%d", &temp);
    for(int i = 0; i < temp; i++)
    {
        scanf("%d %lf", &Itemp, &ftemp);
        resulta[Itemp] += ftemp;
    }

    scanf("%d", &temp);
    for(int i = 0; i < temp; i++)
    {
        scanf("%d %lf", &Itemp, &ftemp);
        resulta[Itemp] += ftemp;
    }
    for(int i = 0; i < 1005; i++) {
        if(resulta[i] != 0) {
            count++;
        }
    }

    printf("%d", count);
    for(int i = 1004; i >= 0; i--)
    {
        if(resulta[i]!=0)
        {
            printf(" %d %.1f", i, resulta[i]);
        }
    }

    return 0;
}
