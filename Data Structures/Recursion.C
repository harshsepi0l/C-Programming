#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* Recursion

    -> What is Recursion?

        - If a function is calling itself, it is called a recursive function.

        -   There has to be a base condition that terminates recursion.

            Type fun(param){
                if(<base condition>)
                {
                    1. ___
                    2. fun(param);
                    3. ___
                }
            }
*/

// -> Tracing Recursion
// -> Examples of Recursion
        void fun1 (int n)
        {
            if (n > 0){
                printf("%d", n); //1. fun1(3), fun1(2), fun1(1)
                fun1(n-1);       //2. fun1(2), fun1(1), fun1(0)
            }
        }

        int main(){
            int x = 3;
            fun1(x); //3. Output: 3,2,1
        }




//  -> Stack used in Recursion

// ->  Time complexity

// -> Recurrence Relation
// */