#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    if(a>64){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}