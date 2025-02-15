#include <stdio.h>

int main() {
    int light;
    scanf("%c", &light);
    
    switch(light){
        case 'R': printf("Stop"); break;
        case 'G': printf("Go"); break;
        case 'Y': printf("Slow Down"); break;
        default: printf("Invalid input"); break;
    }
    return 0;
}