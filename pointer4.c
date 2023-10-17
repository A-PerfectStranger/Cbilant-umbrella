#include <stdio.h>

void Double(int* A, int size) {
    for (int j = 0; j < size; j++) {
        A[j] = 2 * A[j];        
    }
}

int main(void) {
    int A[] = {1, 2, 3, 4, 5};
    int length = sizeof(A) / sizeof(A[0]);
    Double(A, length);
    for (int i = 0; i < length; i++) {
        printf("%i\n", A[i]);
    }
}

/*  A[i] = value of A in i position
    A pointer to the first element in the array
*/