#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int radius;
    scanf("%d", &radius);
    printf("Area: %.2f", 3.14*radius);
    return 0;
}