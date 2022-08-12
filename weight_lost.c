#include "stdio.h"

#define N_NUMBERS 10

void readData(int vec[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    return;
}

int main() {
    int vec1[N_NUMBERS], vec2[N_NUMBERS], match = 0;
    printf("Enter vector 1 of %d positve numbers ", N_NUMBERS);
    readData(vec1, N_NUMBERS);
    printf("Enter vector 2 of %d positve numbers ", N_NUMBERS);
    readData(vec2, N_NUMBERS);

    for (int i = 0; i < N_NUMBERS; i++) {
        if (vec1[i] == vec2[i]) {
            match++;
        }
    }
    for (int i = 0; i < count; i++) {
    }
    printf("Vector match in %d positions", match);

    return 0;
}