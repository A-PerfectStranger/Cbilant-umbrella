#include <stdio.h>

int main(void) {
    int k = 0;
    int f = 4;
    int EDA[3][3];

    for (int i = 0; i < 3; i++) {
        int y = 4;
        y = k + y;
        for (int j = 0; j < 3; j++) {
            EDA[i][j] = y;
            y = y + f;
        }
        k++;
        f++;
    }

    /*for (int o = 0; o < 3; o++) {
        for (int p = 0; p < 3; p++) {
            printf("%i ", EDA[o][p]);
        }
        printf("\n");
    }*/
    int a = 0;
    int SUMAS[] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SUMAS[a] = SUMAS[a] + EDA[i][j];
        }
        a++;
    }

    int total = 0;
    for (int i = 0; i < 3; i++) {
        total = total + SUMAS[i];
    }

}