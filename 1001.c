/**
 * @description: 1001 A+B Format
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b,sum;
int havebaiwan = 0,haveqian = 0;

int main(void)
{
    scanf("%d %d", &a, &b);
    sum = a + b;
    if(sum < 0) printf("-");
    sum = abs(sum);
    if(sum/1000000 != 0)
    {
        printf("%d,", (sum/1000000));
        sum = sum - (sum/1000000)*1000000;
        havebaiwan = 1;
    }
    if((sum/1000 != 0)||(havebaiwan))
    {
        if(havebaiwan)
        {
            printf("%03d,", (sum/1000)); 
        }
        else
        {
            printf("%d,", (sum/1000)); 
        }
        haveqian = 1;
        sum = sum - (sum/1000)*1000;
    }
    if((havebaiwan)||(haveqian))
    {
        printf("%03d", (sum)); 
    }
    else
    {
        printf("%d", (sum)); 
    }

    return 0;
}

/**
 * @description: more simple
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, pos;
    char num[11];

    scanf("%d%d", &a, &b);
    sprintf(num, "%d", a + b);

    for(pos = strlen(num) - 3; pos > 0 && num[pos - 1] != '-'; pos -= 3)
    {
        memmove(num + pos + 1, num + pos, strlen(num) - pos + 1);
        num[pos] = ',';
    }

    puts(num);
    return 0;
}
