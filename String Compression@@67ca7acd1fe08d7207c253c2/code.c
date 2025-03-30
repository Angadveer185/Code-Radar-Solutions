#include <string.h>
void compressString(char str[], char compressed[]){
    int count=1, curridx = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == str[i+1]){
            count++;
        }
        else{
            compressed[curridx] = str[i];
            curridx++;
            if(count>1){
            compressed[curridx] = count;
            curridx++;
            }
            count = 1;
        }
    }
    compressed[strlen(str)] = '\0';
}