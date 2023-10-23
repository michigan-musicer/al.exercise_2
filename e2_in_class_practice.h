#ifndef E2_IN_CLASS
#define E2_IN_CLASS

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int findMaximum(int* array, size_t sz);
void reverseArray(int* array, size_t sz); 
int hasSubarray(int* array, size_t sz, int target);

// array implementation of stack
typedef struct stack 
{
    int _s[65536]; // 65536 = 2^16
    // bonus question: how much memory does this array occupy? 
    size_t _sz; // sz should always start at 0.
} stackType;

int stackSize(stackType* s) 
{
    assert(0);
}

int stackEmpty(stackType* s) 
{
    assert(0);
}

int stackTop(stackType* s) 
{
    assert(0);
}

void stackInsert(stackType* s, int elt_to_insert) 
{
    assert(0);
}

int stackPop(stackType* s) 
{
    assert(0);
}

void testExerciseFunctions() 
{
    int array1[5] = {1, 4, 6, 9, 2};
    assert(findMaximum(array1, 5) == 9);
    int array2[1] = {2};
    assert(findMaximum(array2, 1) == 1);

    int array3[4] = {1, 2, 3, 4};
    reverseArray(array3, 4);
    assert(array3[0] == 4 
        && array3[1] == 3 
        && array3[2] == 2 
        && array3[3] == 1 ); 
    int array4[3] = {5, 6, 7};
    reverseArray(array4, 4);
    assert(array4[0] == 7 
        && array4[1] == 6 
        && array4[2] == 5 ); 
    
    int array5[3] = {1, 2, 3};
    assert(hasSubarray(array5, 3, 3));
    int array6[1] = {1};
    assert(! hasSubarray(array6, 1, 0));
    int array7[3] = {1, 2, -3};
    assert(hasSubarray(array7, 3, 0));
}

void testStackFunctions() 
{
    return;
    stackType stk;
    // ADVANCED NOTE: this should really be part of the struct 
    // initialization, since every stack should start out empty.
    // C's language features do not support default initializations
    // as well as C++ or other languages, so I decided it wasn't worth
    // it. If you are curious about potential ways to do this nicely,
    // look into C macros:
    // https://stackoverflow.com/questions/13716913/default-value-for-struct-member-in-c 
    stk._sz = 0;

    assert(stackEmpty(&stk) && "should start empty");
    stackInsert(&stk, 2);
    stackInsert(&stk, 3);
    stackInsert(&stk, 5);
    stackInsert(&stk, 7);
    assert(stackSize(&stk) == 4 && "inserted 4 elements but size is not 4");
    assert(stackTop(&stk) == 7 && "stack top should be 7");
    
    stackPop(&stk);
    assert(stackSize(&stk) == 3 && "size should go from 4 to 3 after pop");
    assert(stackTop(&stk) == 5 && "stack top should be 5");
    stackPop(&stk);
    stackPop(&stk);
    assert(stackTop(&stk) == 2 && "stack top should be first insert, 2");
    stackPop(&stk);
    assert(stackEmpty(&stk) && "should now be cleared");
}

#endif // E2_IN_CLASS