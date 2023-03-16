/*  merge sort will keep cutting the array in half until there are single
    array elements, then the elements are combined(check the video) as they
    are split but the combined elements are sorted  */

#include <iostream>

using namespace std;

void merge(int array[], int leftIndex, int midIndex, int rightIndex) {
    int leftArraySize = midIndex - leftIndex + 1;
    int rightArraySize = rightIndex - midIndex;

    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for (int i=0; i < leftArraySize; i++)   //refer video again for understanding the loops
        leftArray[i] = array[leftIndex + i];
    for (int j=0; j < rightArraySize; j++)
        rightArray[j] = array[midIndex + 1 + j];

}