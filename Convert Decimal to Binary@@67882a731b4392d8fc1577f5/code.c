#include <stdio.h>

int main(){
    int num, binary=0, digit, place=1;
    scanf("%d",&num);
    
    while(num>0){
        digit = num % 2;
        binary += digit * place;
        num /= 2;
        place *= 10;
    }
    printf("%d\n",binary);
    return 0;
}