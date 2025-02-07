#include <stdio.h>

int main() {
    char name[1000];
    int age;
    char hobby[1000];

    scanf("%s %d %s", name, age, hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}