#include <stdio.h>

void copyArray(int *source, int *destination, int size);

int main() {
    int sourceArray[5] = {1, 2, 3, 4, 5};
    int destinationArray[5];

    copyArray(sourceArray, destinationArray, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}
