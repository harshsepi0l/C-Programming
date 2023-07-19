#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//Arrays - Parameter passing (Arrays are always pass-by-address)  
void fun(int * parameterArray, int n){
    //You can use a star or brackets to initialize an array.
    //You are doing nothing but pointing a varible to an array.
    parameterArray[0] = 15;
    printf("\n\nParameter Array: ");
    for (int i = 0; i < n; i++ ){
        printf(" %d", parameterArray[i]);
    }
}

    //Array passing with return types.
    int * funTwo(int size){
        int *twoPointer ;
        twoPointer = (int*) malloc(sizeof(*twoPointer)); //Created in heap
        for(int i = 0; i < size; i++){
            twoPointer[i] = i + 1;
        }
        return twoPointer;
    }


// Main function:

int main(){

//Loops with Arrays
    int array[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", array[i]); 
    }



//Array as parameter (Arrays are always call-by-address)
    int parameterArray[] = {2, 4, 6, 8, 10};
    int n = 5;

    for (int i; i < n; i++ ){
    printf("\n%d", parameterArray[i]);
}
    fun(parameterArray, n);

//Array return type 
    int *returnPointer, sz=5;
    returnPointer = funTwo(sz);
    printf("\nReturn function array: ");
    for(int i = 0; i < sz; i++){
        printf("%d ", returnPointer[i]);
    }



 return 0; // always have to return something so just return 0 lol
}
