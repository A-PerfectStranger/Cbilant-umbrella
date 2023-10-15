#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int a = 10;
    int b = 2;
    printf("Before swap -- a: %i b: %i\n", a, b);
    swap(&a, &b);         // Call by reference in order to modify the variable directly
    printf("After swap -- a: %i b: %i\n", a, b);
}

void swap(int *p, int *q) {
    int temp = *p; //dereferencing the value at a and b
    *p = *q;
    *q = temp;
}