#include <stdio.h>

void main() {
    int num, i = 0;
    int binary[32];

    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}