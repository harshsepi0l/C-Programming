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
                    1. Calling time     -- Ascending
                    2. fun(param);
                    3. Returning time   -- Descending
                }
            }

        - Has a calling phase and a return phase.
        - Recursive functions are like rubber bands. 
        - Recursive functions use stacks.
*/

// -> Tracing Recursion
// -> Examples of Recursion
//1.
        void fun1 (int n)
        {
            if (n > 0){
                printf("\n%d", n); //1. fun1(3), fun1(2), fun1(1)
                fun1(n-1);       //2. fun1(2), fun1(1), fun1(0)
            }
        }

       

//2.
        void fun2(int n){
            if(n > 0) {
                fun2(n-1); //1. fun2(3), 2. fun2(2), 3.fun2(1), 4.fun2(0)
                printf("\n%d", n); 
                //repeat: 3. fun2(1), 2. fun2(2), fun2(3)
            }
        }
    
//MAIN:
 int main(){
            int x = 3;
            fun1(x); //3. Output: 3,2,1
            fun2(x); //4. Output: 1,2,3
        }



// ->  Time complexity

// -> Recurrence Relation
// */