#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


/*
Write a C function to calculate the average of 3 numbers in a list. You will begin the problem with an empty list, 
and must calculate the average as each number comes in. Once the list has 3 elements, the oldest element will be 
discarded when a new element is passed in.
*/

/*
- function with avgNumber for passing
- main code with test cases.
- iterate through the loop and once its done with 3, ask for more.
- finally the result.
- call it in the main function.
*/

float avgFunc( int * avgNumbers, int givenSize ){
    float sum = 0;
    float result = 0;
    for (int i = 0; i < givenSize; i++){
        sum += avgNumbers[i];
    }

    result = sum / givenSize;
    return result;
    
}


int main(){
    int * avgNumbers;
    int givenSize;
    printf("Number of numbers for average: ");
    scanf("%d", &givenSize);
    avgNumbers = (int *)malloc(givenSize*sizeof(int));
    int result;

    printf("Enter the numbers: ");
    for (int i = 0; i < givenSize; i++){
        scanf("%d", &avgNumbers[i]);
    }

    result = avgFunc(avgNumbers, givenSize);
    printf("The average of the numbers is: %d", result);

    free(avgNumbers);
return 0;

}