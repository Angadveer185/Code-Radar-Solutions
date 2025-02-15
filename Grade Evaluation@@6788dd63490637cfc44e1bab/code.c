#include <stdio.h>

int main() {
    int grade;
    scanf("%c", &grade);
    
    switch(grade){
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Below Average"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid grade"); break;
    }
    return 0;
}