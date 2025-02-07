#include <stdio.h>

int main() {
    char s1[1000];
    char s2[1000];
    scanf("%s", &s1);
    scanf("%s", &s2);

    printf("You entered: %s and %s", s1, s2);
    return 0;
}