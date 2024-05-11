
#include <string.h>
#include <stdlib.h>

char* gcdOfStrings(char* str1, char* str2) {
    if (strlen(str1) < strlen(str2)){
        return gcdOfStrings(str2, str1);
    }
    else if (strncmp(str1, str2, strlen(str2)) != 0)
        return "";
    else if (strlen(str2) == 0){
        return str1;
    }
    else {
        return gcdOfStrings(str1 + strlen(str2), str2);
    }   
}