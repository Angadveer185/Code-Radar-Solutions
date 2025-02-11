#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if (a==b && b==c && a==c) {
        printf("Equilateral");
    } else if(a!=b && b!=c && a!=c) {
        printf("Scalene");
    } else{
        printf("Isosceles");
    }

    return 0;
}
