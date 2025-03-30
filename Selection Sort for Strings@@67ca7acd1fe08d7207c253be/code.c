#include <string.h>
void selectionSort(char arr[][100], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallidx = i; 
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[j], arr[smallidx]) < 0) {
                smallidx = j;
            }
        }
        if (smallidx != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[smallidx]);
            strcpy(arr[smallidx], temp);
        }
    }
}

void printArray(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}