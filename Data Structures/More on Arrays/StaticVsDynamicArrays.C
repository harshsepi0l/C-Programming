//Static vs Dynamic Array
/*
How to create an array inside the heap:
1. Declare a pointer. int *p
2. p = (int) malloc(5*sizeof(int));  <-- Declaration for heap
3. Then release the memory. free(p);

Accesing the array:
P[0] = 5; <-- as easy as that

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[5]={2,4,6,8,10};

    int *p;
    int i;
    p=(int*)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for(i= 0; i<5; i++) //Stack Array
    printf("%d ",A[i]);

    printf("\n");

    for(i=0; i<5; i++) //Heap Array
    printf("%d ",p[i]);

    return 0;
}