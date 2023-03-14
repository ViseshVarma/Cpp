/*  In Bubble sort first it will check if the next element is larger,
if it is larger then it will switch. Doing this we will bubble the
largest number to the end of the array. then we start over the same process
from the first element in the array */

#include <iostream>

using namespace std;

void bubbleSort(int array[], int size) {
    for(int i= size - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {

    int myArray[] = {6,4,2,5,1,3};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    bubbleSort(myArray, size);

    for(auto value: myArray){
        cout << value << " ";
    }
}