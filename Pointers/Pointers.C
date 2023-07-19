#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

//Pointers
    //Intro to pointers
        int a = 10;
        int *p; // pointer variable (decleration or dereference)
        p = &a; // address reference of a at p
        printf("\nusing pointer %d", *p); 
        // *p means that it will go to the address and get the value
        printf("\nusing pointer %d %d", p, &a); 
        // This gives us the address of a

    //.. Pointers to Arrays
    int b[5] = {2, 4, 6, 8, 10};
    int *q;
    q=b; //no ampersand required when we are pointing to arrays.

    for (int i = 0; i < 5; i++){
    printf("\nValue of A: %d ", q[i]); 
    //Using q[index] we can go through all of the values
    }
    
    //.. Pointers to Structs
        // struct Rectangle r;
        // struct Rectangle *t = &r;
        

        // t -> length = 20;
        // t -> breadth = 10;

        // printf("\nValue of Rectangle using pointer: %d", *t);






 return 0; // always have to return something so just return 0 lol
}