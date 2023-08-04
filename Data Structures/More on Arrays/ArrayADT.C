#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//Array as an abstract datatype
/*
There are two ways of creating an array:

1) int A[10];
2) int *A;
    A = (int*) malloc(10*sizeof(int));

Data that requires to make an array:
1) Array Space
2) Size
3) Length (No. of elements)

*/

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are:\n");
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int main(){
    struct Array arr;   

    int n,i;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers: ");
    scanf("%d", &n);


    printf("Enter all Elements\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;

    Display(arr);

    return 0;
}