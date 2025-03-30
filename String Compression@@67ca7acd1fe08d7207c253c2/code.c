#include <string.h>
void compressString(char str, char compressed){
    int count=0, curridx = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == str[i+1]){
            count++;
        }
        else{
            compressed[curridx] = i;
            curr++;
            compressed[curridx] = count;
            curr++;
            count = 0;
        }
    }
    compressed[strlen(str)] = '\0';
}