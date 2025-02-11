#include<stdio.h>

int main() {
    int n = 13;
    int prime = 1;

    if (n < 2) {
        prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}