#include <stdio.h>

int main(void) {
    int A[] = {2, 4, 8, 4, 5};
    int *p = A;
    printf("Address of the head of the array: %p\n", A);         //Using name of the array 
    printf("Address store in the pointer: %p\n", p);            //An array pointer always store the address of the 1st element
    printf("Address of the first element in the array: %p\n", &A[0]);   //The classic way of get a direction
    printf("Value of the head of the array (typical use): %i\n", A[0]); //The normal way of accessing the value
    printf("Value of the head of the array (pointer): %i\n", *p); //Using pointer
    printf("Value of the head of the array (pointer + value): %i\n", *(A)); //Using the pointer and the name of the array
    printf("\n");
    int length = sizeof(A) / sizeof(A[0]);  //A way to know the size of any array
    //Going through all the array with pointers arithmetic
    //Cause int = 4 bytes is gonna iterate over memory
    for (int i = 0; i < length; i++) {
        printf("Value of the [%i] element: %i\n", i + 1, *(p + i));
    } 

}