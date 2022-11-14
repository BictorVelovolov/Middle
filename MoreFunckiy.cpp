#include<iostream>
#include"middle.h"
using namespace std;

 int itc_min_num(long long a) //Number 6
 {
     int g, h, l;
     g = 10;
     if (a == 0)
        return 0;
     if (a > 0)
    {
        while (a > 0)
        {
            h = a % 10;
            if (h < g)
            {
            g = h;
            }
            a = a / 10;
        }
    }
    if (a < 0)
    {
        a = a * (-1);
        while (a>0)
        {
            h=a%10;
            if (h < g)
            {
            g = h;
            }
            a = a / 10;
        }
    }
    return g;
 }
int itc_rev_num(long long a) //Number 7
{
    int g, rc;
    rc = 0;
    if (a > 0)
    {
        while (a>0)
        {
            g = a % 10;
            rc = rc * 10 + g;
            a = a / 10;
        }
    }
    else
    {
        a = a * (-1);
        while (a>0)
        {
            g = a % 10;
            rc = rc * 10 + g;
            a = a / 10;
        }
        rc = rc * (-1);
    }

    return rc;
}
 int itc_null_count(long long a) //Number 8
 {
     if (a == 0)
        return 1;
     int g, h;
     h = 0;
     if (a > 0)
     {
        while (a != 0)
        {
            g = a % 10;
        if (g==0)
            h = h + 1;
        g = g * 0;
        a = a / 10;
        }
     }
     else
     {
         a = a * (-1);
        while (a != 0)
        {
            g = a % 10;
        if (g==0)
            h = h + 1;
        g = g * 0;
        a = a / 10;
        }
     }
     return h;
 }

 long long perevorot(long long i){
     int g, nch;
     if (i < 0)
        i = i * (-1);
      while (i != 0)
        {
            g = i % 10;
            nch = nch*10 + g;
            i = i / 10;
        }
     return nch;
 }

 bool itc_mirror_num(long long a) // Number 9
{
    long long i, nch, g;
    if (a == 0)
        return 0;
    i = a;
    nch = perevorot(a);
    if (nch == a * (-1) || nch == a)
        return 1;
    return 0;
}
 int itc_mirror_count(long long a) //Number 10
 {
     int b, i;
     if (a > 0)
     {
        for (i = 1; i < a; i++)
        {
            if (itc_mirror_num(i))
                b = b + 1;
        }
     }
     else
     {
         a = a * (-1);
         for (i = 1; i < a; i++)
        {
            if (itc_mirror_num(i))
                b = b + 1;
        }
     }
     return b;
}
