#include<iostream>
#include"middle.h"
using namespace std;

int itc_second_max_num(long a) //Number 11
{
    int d, h, g;
    h = 0;
    if (a / 10 != 0)
    {
        if (a > 0)
        {
            g = itc_max_num(a);
            while (a > 0)
            {
                d = a % 10;
                if (g > d)
                {
                    if (d > h)
                    h = d;
                }
                a = a / 10;
            }
        }
        else
        {
            a = a * (-1);
            g = itc_max_num(a);
            while (a > 0)
        {
            d = a % 10;
            if (g > d)
            {
                if (d > h)
                    h = d;
            }
            a = a / 10;
        }
        }
        return h;

    }
    return -1;
}

 int itc_second_simple_max_num(long a)//Number 12
 {
     int d, h, g, i;
    h = 0;
    i = 0;
    if (a / 10 !=0)
    {
        if (a > 0)
        {
            g = itc_max_num(a);
            while (a > 0)
            {
                d = a % 10;
                if (g > d)
                {
                    if (d > h)
                    h = d;
                }
                a = a / 10;
                if (d == g)
                    i = i + 1;
            }
        }
        else
        {
            a = a * (-1);
           g = itc_max_num(a);
           while (a > 0)
           {
               d = a % 10;
              if (g > d)
            {
                  if (d > h)
                    h = d;
            }
            a = a / 10;
            }
            if (d == g)
                i = i + 1;
        }
            if (i > 1)
            return -1;

        return h;
    }
    return -1;
 }

long itc_bin_num(long a) //Number 13
{
    int nch, d, i, g;
    nch = 0;
    i = 1;
    if (a > 0)
    {
        while (a > 0)
        {
            d = a % 2;
            nch = nch * 10 + d;
            a = a / 2;
            if (nch == 0)
                i = i * 10;
        }
    }
    else
    {
        while (a > 0)
        {
            d = a % 2;
            nch = nch * 10 + d;
            a = a / 2;
            if (nch == 0)
                i = i * 10;
        }
    }
    g = nch * i;
    return g;
}
long itc_oct_num(long a) //Number 14
{
    int nch, d, g, i;
    nch = 0;
    i = 1;
    if (a > 0)
    {
        while (a > 0)
        {
            d = a % 8;
            nch = nch*10 + d;
            a = a / 8;
            if (nch == 0)
                i = i * 10;
        }
            if (nch != 0)
            {
            g = nch * i;
            return itc_rev_num(g);
            }
    }
    else
    {
        a = a * (-1);
        while (a > 0)
        {
            d = a % 8;
            nch = nch*10 + d;
            a = a / 8;
            if (nch == 0)
                i = i * 10;
        }
            if (nch != 0)
            {
            g = nch * i;
            return itc_rev_num(g);
            }
    }
    return i;
}

int itc_rev_bin_num(long a) //Number 15
{
    int d, i, nch;
    i = 1;
    nch = 0;
    while (a > 0)
    {
        d = a % 10;
        nch = nch + d*i;
        i = i * 2;
        a = a / 10;
    }
    return nch;
}
