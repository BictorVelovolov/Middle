#include<iostream>
#include"middle.h"
using namespace std;

int itc_rev_oct_num(long long a) // Number 16
{
    int b, f, e;
    b = 1;
    e = 0;
    while (a > 0)
    {
        f = a % 10;
        e = e + f*b;
        b = b * 8;
        a = a / 10;
    }
    return e;
}
