#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Write a C function to convert a string (e.g. "1997") to an integer (e.g. 1997).
// We can use a function in C called Atoi()

int myAtoi (char *str){
    int result = 0; 
    int sign = -1; 
    int i = 0; //index of the first digit in the array; 


//If the number is negative, then update the sign.
if(str[0] == '-'){
    sign = -1;
    i++;
}

for (int j = i; str[j] != '\0'; j++){
    result = 10 * result + str[j] - '0';

     
    }
   return sign*result;
}

int main(){
    char str1[] = "-1234";
    int value = myAtoi(str1);
    printf("%d", value);


    return 0;

}