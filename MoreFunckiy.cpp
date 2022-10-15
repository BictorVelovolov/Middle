#include<iostream>
#include"Middle.h"
using namespace std;

 int itc_min_num(long a) //Number 6
 {
     int g, h;
     g = 10;
    while (a>0)
    {
        h=a%10;
        if (h<g)
        {
        g = h;
        }
        a = a / 10;
    }
    return g;
 }
int itc_rev_num(long a) //Number 7
{
    int g, rc;
    rc = 0;
    while (a>0)
    {
        g = a % 10;
        rc = rc * 10 + g;
        a = a / 10;
    }
    return rc;
}
int itc_null_count(long a) //Number 8
 {
     int g, h;
     h = 0;
     while (a != 0)
     {
        g = a % 10;
     if (g==0)
         h = h + 1;
     g = g * 0;
     a = a / 10;
     }
     return h;
 }
 bool itc_mirror_num(long a) // Number 9
{
    long i, nch, g;
    i = a;
    nch = 0;
    while (i != 0)
    {
        g = i % 10;
        nch = nch*10 + g;
        i = i / 10;
    }
    if (nch == a)
        return 1;
    return 0;
}

long itc_bin_num(long a) //Number 13
{
    int nch, d, i, g;
    nch = 0;
    i = 1;
    while (a > 0)
    {
        d = a % 2;
        nch = nch * 10 + d;
        a = a / 2;
        if (nch == 0)
            i = i * 10;
    }
    g = nch * i;
    return g;
}
