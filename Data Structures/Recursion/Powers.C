#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int pow(int x, int m){

    int actual = 1;

    for (int i = 0; i < m; i++ ){
        actual = actual * x;
    }

    return actual;
}


int main(){

int pass = pow(3, 3);
printf("%d \n ", pass);



 return 0;   
}