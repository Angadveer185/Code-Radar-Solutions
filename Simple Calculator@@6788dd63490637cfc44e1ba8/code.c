#include <stdio.h>

int main() {
    float num1, num2; 
    char choice;
    scanf("%f %f %c", &num1, &num2, &choice);
    
    switch(choice){
        case '+': printf("%d", num1 + num2); break;
        case '-': printf("%d", num1 - num2); break;
        case '*': printf("%d", num1 * num2); break;
        case '/': printf("%d", num1 / num2); break;
        default: printf("Invalid"); break;
    }
    return 0;
}