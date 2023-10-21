#include <stdio.h>

void print(char* C) {
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main(void) {

    char C[20] = "HI, Eduardo";
    print(C);
}