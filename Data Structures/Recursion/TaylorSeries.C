#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
Taylor series e^x

e^x = 1 + x/1 + x^2/2! + x^3/3! + x^4/4! + ... + n terms

sum(n) = 1 + 2 + 3 + ... n         -- sum(n-1) + n
fact(n) = 1 * 2 * 3 * ... * n      -- fact(n-1) * n
pow(x,n) = x * x * x * ... n times -- pow(x, n -1) * x


e(x, n): p = p * x, f = f * n
*/


double e(int x, int n){
    static double p = 1, f = 1;
    double r;
    if(n == 0)
        return 1;
    
    r = e(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
}
int main()
{

    printf("%1f \n", e(3,10));
    return 0;
}