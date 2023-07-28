#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
1. Tail Recursion - *Loops are more effecient than a tail recursion.
2. Head Recursion 
3. Tree Recursion
4. Indirect Recursion
5. Nested Recursion
*/

// Tail Recursion:
// If a recursive function is calling itself, then it is a tail recursion.
// All the functions will be performed at calling time and none at returning time.

// Code:
    void tail(int n){
        if (n > 0){
        printf("%d", n);
        tail(n-1); //fun(n-1)+n <-- will be performed at return time. (this is not tail recursion)
        }
    }

// Comparision with Loops:
    void tailLoop (int n){
        while (n > 0){
            printf("\n%d", n);
            n--;
        }
    }
    // in both cases, the test case is fun(3).
    // Time complexity: O(n).
    // Space: Recursion - O(n), Loop - O(1).



// Head Recursion: 
// If the first thing the function does is a recursive call, then it is a head recursion.
// All the functions will be performed after the calling time, so returning time.

// Code: 
    void head (int n){
        if (n > 0){
            head(n-1);
            printf("\n\n%d", n);
        }
    }

// Comparision with Loops:
// We cannot directly convert head recursion to a loop, so we have to write the loop
// in a different way.
    void headLoop (int n){
        int i = 1;
        while (i <= n){
            printf("\n\n%d", i);
            i++;
        }
        
    }
    // in both cases, the test case is fun(3).




// Tree Recursion:
// If a recursive function is calling itself MORE THAN ONCE, then it is a tree recursion.

// Code: 
    void tree (int n){
        if (n > 0){
            printf("\n\n%d", n);
            tree(n-1);
            tree(n-1);
        }
    }

    // Time complexity: n^2 (for this tree).
    // Space: n.



// Nested Recursion:
// If a recursive function is calling itself within the recursive call, then its a nested recursion.

//Code:
    int nestedRecursion(int n){
        if(n > 100){
            return n - 10;
        }
        else 
            return nestedRecursion(nestedRecursion(n+11));
    }
    


// MAIN:

int main() {
    
    int r = nestedRecursion(30); //Grows over 100 and gives 91.
    printf("%d", r);


    return 0;
}