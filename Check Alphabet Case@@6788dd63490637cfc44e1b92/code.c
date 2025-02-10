#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    if(a<=90 && a>=65){
        printf("Uppercase");
    }
    else if(a<=122 && a>=97){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}