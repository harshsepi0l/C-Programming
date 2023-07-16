#include <stdio.h>
#include <stdbool.h>

// Structures
    struct Rectangle
    {
        int length;
        int breadth;
    };



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
    
//Arrays - Parameter passing (Arrays are always pass-by-address)  
    void fun(int sizeArray[])
    {
        printf(sizeof(sizeArray)/sizeof(int));
    }

// Main function:

int main(){

/* 
Escape sequence = Character combination consisting of a backslash 
    followed by a letter or combination of digits.
    They specify action within a line or string of text.
        \n = new line
        \t = tab
    
    
*/ 
    printf("I like pizza, is really good!\n");



//Variables: datatype + varible declaration 
    int x;
    x= 20;
    int y = 321;

    int age; //integer
    float gpa = 3.5; //floating point number
    char grade = 'A'; //single character
    char name[] = "Bro"; //Array of characters
    bool e = true; //True or false




// Format specifier % = defines and formats a type of data to be displayed.
    /*
    %c  = character
    %s  = string (array of characters)
    %f  = float
    %lf = double
    %d  = integer
    
    %.1 = decimal precision
    %1  = minimum field width
    %-  = left align 
    
    */
    printf("Hello %s\n", name); //String of characters for place holder
    printf("You are %d years old\n", age); //Decimal value for place holder
    printf("Your grade is %c\n", grade); //Character value for place holder
    printf("Your gpa is %f", gpa); //Floating value for place holder.

    //Constant = fixed values for variables
    const float PI = 3.14159;




//User input
    /* USE WHEN NEEDED
       - printf("\nHow old are you?");
       scanf("%d", &age); //Ampersand is the address for the operator

       printf("You are %d years old", age);
    */




//Loops with Arrays
    int array[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", array[i]); 
    }




//Declaration of the struct (sitting outside of main)
    //   struct Rectangle r;

    //Declaration and initialization of the struct
     // struct Rectangle r = {10 , 5};




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
        struct Rectangle r;
        struct Rectangle *t = &r;
        

        t -> length = 20;
        t -> breadth = 10;

        printf("\nValue of Rectangle using pointer: %d", *t);

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



//Arrays as parameter (Arrays are always call-by-address)
int pointerArray[] = {2, 4, 6, 8, 10};
int n = 5;

for (int i; i < n; i++ ){
    printf("\n%d", pointerArray[i]);
}
fun(pointerArray);

 return 0; // always have to return something so just return 0 lol
}
