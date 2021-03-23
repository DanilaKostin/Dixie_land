#include "myfunc.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int myfunc(int b) {
    return b+4;
}

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}


cor f(int a,int b,int c)
{
cor korni;
double d;
d =(b*b)-4*a*c;
    if (d>0)
{
    if (a==0)
    {
        korni.x1 = (-c)/(b);
        korni.count = 1;
        return korni;
    }
    korni.x1=(-b+sqrt(d))/(2*a);
    korni.x2=(-b-sqrt(d))/(2*a);
    korni.count = 2;
    if (korni.x1 > korni.x2) //сортируем корни
    {
        double r;
        r = korni.x2;
        korni.x2 = korni.x1;
        korni.x1 = r;
    }
    return korni;
}
    if (d<0)
{
    korni.count = 0;
}
    if (d==0)
    {
        if (a==0 && b==0 && c!=0)
        {
            korni.count = 0;
            return korni ;
        } else
            if (a== 0 && b==0 && c==0)
            {
                   korni.count = FP_INFINITE;
                    return korni;
            }
        korni.x1=(-b)/(2*a);
        korni.count = 1;
        return korni;
   }
return korni;
}




