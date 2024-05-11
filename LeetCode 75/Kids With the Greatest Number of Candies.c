/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdbool.h>
#include <stdlib.h>

void addValueToArray(int array[], int size, int value);
int maxValueOfArray(int array[], int size, int extraCandies);

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = maxValueOfArray(candies, candiesSize, extraCandies);
    *returnSize = candiesSize;
    bool* output = (bool *)malloc(candiesSize * sizeof(bool));

    for (int i = 0; i < candiesSize; i++){
        if (candies[i] >= max){
            output[i] = true;
        }
        else
            output[i] = false;
    }
    return output;
}

int maxValueOfArray(int array[], int size, int extraCandies){
    int max = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] > max) {
            max = array[i];
        }
        array[i] += extraCandies;
    }
    return max;
}