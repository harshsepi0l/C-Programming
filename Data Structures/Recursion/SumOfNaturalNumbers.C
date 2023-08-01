#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* Sum of First 'n' Natural Numbers

1 + 2 + 3 + 4 + 5 + 6 + 7
1 + 2 + 3 + 4 + .... + n

// Recursive definition
sum(n) = 1 + 2 + 3 + 4 + ... + (n-1) + n
sum(n) = sum(n-1) + n

sum (n) = { sum(n-1) + n | 0} n =0 | n > 0

Code using recursion:
int sum (int n){
    if (n == 0) {
        return 0;
     }
    else
        return sum(n-1) + n; 
}

Code using loop:
int sum (int n){
    int i,s = 0;
    for(i = 1; i <=n; i++){
        s = s + i;
    }
    return s;
}

Formula Code: (n(n+1))/2 -- faster method
*/

//Code:
int sum (int n){
    if (n == 0) {
        return 0;
     }
    else
        return sum(n-1) + n; 
}

int main(){
    int s = sum(5);
    printf("%d", s);
    return 0;
}


