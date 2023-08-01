#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* Factorial of a Number

n! = 1 * 2 * 3 * 4 ..... * n
s! = 1 * 2 * 3 * 4 * 5 = 120

0! = 1 and 1! = 1

fact(n) = 1 * 2 * 3 * .. * (n-1) * n
fact(n) = fact(n-1) * n

fact(n) = { fact(n-1) * n | 1} n > 0 | 1

Code using recursion:
int fact(int n){
    if (n == 0){
        return (1);
    }
    return fact(n-1) * n;
}
*/

int fact (int n){
    if (n == 0){
        return 1;
    }
    return fact(n - 1) * n;
}

int main(){
    int f = fact(3);
    printf("%d", f);
    return 0;
}