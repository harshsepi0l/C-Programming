#include <stdio.h>
#include <stdbool.h>


// Structures
    struct Rectangle
    {
        int length;
        int breadth;
    };

int main(){
    printf("Hello World!\n");

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




 return 0; // always have to return something so just return 0 lol
}
