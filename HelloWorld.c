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
    printf("\nHow old are you?");
    scanf("%d", &age); //Ampersand is the address for the operator

    printf("You are %d years old", age);


    //Loops with Arrays
    int A[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", A[i]); 
    }
    //Declaration of the struct (sitting outside of main)
   //   struct Rectangle r;

    //Declaration and initialization of the struct
    struct Rectangle r = {10 , 5};

 return 0;
}
