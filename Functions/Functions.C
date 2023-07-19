#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// Functions - Parameter Passing
    // Using Pass by Value and Address (No Reference in C)
    // Declaration of a function:

    //Pass by Value
    int add (int first, int second) // Prototype or Signature of a function
            //Formal Parameters
    {
        int added;
        added = first + second;
        return (added);   
    }

    //Pass by address/reference(in C) - Used to change the actual parameters instead of formal
     // --> Makes use of pointers to do this

        void Swap (int *j, int *k) //Swap function 
        {
            int temp;       //Temp val
            temp = *j;      // Temp val stores j
            *j = *k;        // j now equals k
            *k = temp;      // k now takes temp which is original j

            //Since we are not returning anything and manipulating
            //the parameters we don't need a return call. (function is 
            //also void).
        }
    

int main(){
//Functions
    //.. Call by Value
        int numberOne, numberTwo, finalThree;
        numberOne = 10;
        numberTwo = 5;

        finalThree = add(numberOne,numberTwo); //Actual Parameters
        printf("\nSum of both numbers: %d", finalThree);
    
    //.. Call by Address
        int addressOne, addressTwo;
        addressOne = 10;
        addressTwo = 20; 
        printf("\nBefore Swapping: %d, %d", addressOne, addressTwo);

        Swap(&addressOne, &addressTwo); // Ampersand to send the address of the variables!!!
        printf("\nAfter swapping: %d, %d", addressOne, addressTwo);
}