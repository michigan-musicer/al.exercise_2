#include "e2_in_class_practice.h"


// Problem 1: find max elt in array
// sz is a variable storing the size of the array.
// REQUIRES that array is not empty.
// 
// EXAMPLE: array = {1, 4, 6, 9, 2}
// findMaximum should return the value 9.
//
// EXAMPLE: array = {-1, -4, -6, -9, -2}
// findMaximum should return the value -1.
int findMaximumSolution(int* array, size_t sz) 
{
    int max = array[0];
    for (size_t i = 1; i < sz; ++i) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
    }

    return max;
}

// Problem 2: reverse elts in array (in-place operation) 
// sz is a variable storing the size of the array.
// 
// EXAMPLE: array = {1, 2, 3, 4}
// reverseArray should mutate array into {4, 3, 2, 1}.
void reverseArraySolution(int* array, size_t sz) 
{
    for (size_t i = 0; i < sz / 2; ++i) {
        int temp = array[i];
        array[i] = array[sz - 1 - i];
    }
}

// Problem 3: return whether or not a subarray exists in the
// array that sums to target.
// Return 1 if such an array exists, otherwise return 0.
// sz is a variable storing the size of the array.
// REQUIRES that array is not empty.
// 
// EXAMPLE: array = {1, 2, 3}, target = 3
// findSubarray should return 1 ({1, 2} and {3} both sum to target). 
// 
// EXAMPLE: array = {1}, target = 2
// findSubarray should return 0. 
// 
// EXAMPLE: array = {1, 2, -3}, target = 0
// findSubarray should return 1 ({1, 2, -3} sums to target). 
int hasSubarraySolution(int* array, size_t sz, int target) 
{
    for (size_t start = 0; start < sz; ++start) 
    {
        int sum = 0;
        for (size_t i = start; i < sz; ++i) 
        {
            sum += array[i];
            if (sum == target) 
            {
                return 1;
            }
        }
    }

    return 0;
}

int main() 
{

}