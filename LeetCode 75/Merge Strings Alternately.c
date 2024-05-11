#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char * mergeAlternately(char * word1, char * word2){
    int i = 0;
    char *output = (char *) malloc(strlen(word1) + strlen(word2) + 1);
    while (*word1 || *word2){
        if (*word1){
            output[i++] = *word1++;
        }
        if (*word2)
            output[i++] = *word2++;
    }
        output[i] = '\0';
        return output;
}
