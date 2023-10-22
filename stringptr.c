#include <stdio.h>

void print(char *V) {
    while (*V != '\0')
    {
        //V[0] = 'A'; will give compilation error or runtime error
        printf("%c", *V);
        V++;
    } 
    printf("\n"); 
}

int main(void) {
    char *C = "Hi, Eduardo";  //If u usr string as pointer this string becomes constant and inmutable
    print(C); 
}