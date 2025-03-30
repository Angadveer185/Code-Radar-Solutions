#include <string.h>
void compressString(char str[], char compressed[]) {
    int count = 1, curridx = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[curridx++] = str[i];
            
            if (count > 1) {
                curridx += sprintf(&compressed[curridx], "%d", count);
            }

            count = 1;
        }
    }
    
    compressed[curridx] = '\0';
    if(strlen(compressed) > strlen(str)){
        strcpy(str, compressed);
    }
}