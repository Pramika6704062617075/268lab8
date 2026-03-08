#include <stdio.h>

void printAr(int myAr[], int size);
void addthree(int number[], int pos[][2], int sizeNum, int sizePos);

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int pos[3][2] = {
        {0, 100},
        {2,  50},
        {4,  10}
    };

    printAr(arr, 5);
    addthree(arr, pos, 5, 3);
    printAr(arr, 5);

    return 0;
}

void printAr(int myAr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", myAr[i]);
    printf("\n");
}

void addthree(int number[], int pos[][2], int sizeNum, int sizePos) {
    int i;
    for (i = 0; i < sizePos; i++)
        number[pos[i][0]] += pos[i][1];
}

