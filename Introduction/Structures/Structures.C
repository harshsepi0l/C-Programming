#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// Structures 
    struct Rectangle
    {
        int length;
        int breadth;
    };

// Structures - Parameter Passing
    void fun(struct Rectangle *p)
    {
        p->length = 20;
        printf("\nLength: %d", p->length);
        printf("\nBreadth: %d", p->breadth);
    }

int main(){
//Declaration of the struct (sitting outside of main)
    //   struct Rectangle r;

    //Declaration and initialization of the struct
    struct Rectangle r = {10 , 5};  


//Structure - Parameter passing 
    fun(&r);
    printf("\n\nLength: %d\nBreadth: %d\n",r.length, r.breadth);
    return 0;
}