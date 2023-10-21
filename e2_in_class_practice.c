#include "e2_in_class_practice.h"

// array initializations
// basics of arrays -- indexing, modifying
// 2D and 3D arrays
    // you can take a little time to discuss how to declare these optimally
// one for 
// different syntaxes for array indexing
// const?

// stack and queue, array impls
    // provide a struct that is int[100], size
    // you will need to show the syntax for accessing members
// creating s/q insert, [] operator, pop, size functions 

void showPointerBasics() 
{
    return;
    // you need to #include stdlib.h to use NULL, 
    // which points to 0x0
    int* integer_pointer = NULL;

    int x = 5;
    char y = 'a';
    // pointer of any type you want!
    // first pointing to int...
    void* void_pointer = &x;
    printf("value of void_pointer is %d", *(int*)void_pointer);
    // ...and then pointing to char
    void_pointer = &y;
    printf("value of void_pointer is %c", *(char*)void_pointer);

}

void showArrayBasics() 
{
    return;
    // initialization
    // go into debugger and show the junk values here
    int array1[50];

    // initializer list
    int* array2 = {1, 2, 3, 4};

    // type is pointer -- print pointer, array
    int x = 0;
    int* x_ptr = &x;
    printf("x_ptr resides at %x", x_ptr);
    printf("array2 resides at %x", array2);

    // indexing
    for (size_t i = 0; i < 4; ++i) {
        printf("%d", array2[i]);
    }
    // different syntaxes

    printf("%d", *array2);
    printf("%d", *(array2 + 2));

    // modifying
    array2[2] = 9000;
    for (size_t i = 0; i < 4; ++i) {
        printf("%d", array2[i]);
    }
}


// Problem 1: find max elt in array
// sz is a variable storing the size of the array.
// REQUIRES that array is not empty.
// 
// EXAMPLE: array = {1, 4, 6, 9, 2}
// findMaximum should return the value 9.
//
// what is size_t? 
// https://www.embedded.com/why-size_t-matters/
int findMaximum(int* array, size_t sz) 
{
    return;
}

// Problem 2: reverse elts in array (in-place operation) 
// sz is a variable storing the size of the array.
// 
// EXAMPLE: array = {1, 2, 3, 4}
// reverseArray should mutate array into {4, 3, 2, 1}.
void reverseArray(int* array, size_t sz) 
{
    return; 
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
// 
// If you are very curious, more difficult versions of this problem
// rely on a technique called "dynamic programming" to solve 
// efficiently. You may discuss this when you get to recursion.
// https://www.geeksforgeeks.org/dynamic-programming/ 
int hasSubarray(int* array, size_t sz, int target) 
{
    return; 
}

// Stack problems: see header file

int main() 
{
    return; // remove this line to test functions
    testExerciseFunctions();
    testStackFunctions();
}