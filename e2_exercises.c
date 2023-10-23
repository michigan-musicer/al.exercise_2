#include "e2_exercises.h"

// Returns the INDEX of second-smallest element in array.
// REQUIRES that array has size of at least 2 
// and that there is a unique minimum.
// In case of ties, return the lowest index.
// 
// EXAMPLE: array = {1, 10, -2, 0};
// findIndexOfSecondSmallest(array, 4) should return 0.
// 
// EXAMPLE: array = {2, 3, 3, 4, 5};
// findIndexOfSecondSmallest(array, 5) should return 3.
// 
// NOTE: the simplest solution requires you to use the 
// (expr1) && (expr2) operator, which returns 1 if expr1 and
// expr2 are both true and 0 otherwise.
size_t findIndexOfSecondSmallest(int* array, size_t sz) 
{
    // technically unsigned int on my computer
    // EXAMPLE: array = {1, 10, -2, 0};
    int minimum = array[0];
    for (size_t i = 0; i < sz; ++i) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    int second_smallest = array[0];
    for (size_t i = 0; i < sz; ++i) {
        if (array[i] < second_smallest && minimum != array[i]) {
            second_smallest = array[i];
        }
    }

    for (size_t i = 0; i < sz; ++i) {
        if (array[i] == second_smallest) {
            return i;
        }
    }
}

// Multiplies every elt by the value of the last elt.
// 
// EXAMPLE: array = {4, 5, 6, 7, 2};
// multiplyAllByLastElt(array, 5) should mutate array into {8, 10, 12, 14, 4}. 
void multiplyAllByLastElt(int* array, size_t sz) 
{
    return;
}

// Copy every SECOND elt in src into dest, starting with the first element.
// REQUIRES that dest has enough space to store half of all elements in src. 
// 
// EXAMPLE: src = {1, 2, 3, 4, 5, 6};
// copyEverySecondIntoDest(src, dest, 6) should mutate dest into
// {1, 3, 5}.
void copyEverySecondIntoDest(int* src, int* dest, size_t sz) 
{
    return;
}