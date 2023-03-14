/*  In insertion sort we always start with the second item
    and if the second item is smaller then the first then we switch them,
    if it is not smaller we wont switch them and move to the next elemets */

#include <iostream>

using namespace std;

void insertionSort(int array[], int size){
    for(int i=1; i<size; i++){
        int temp = array[i];
        int j = i - 1;
        while( j > -1 && temp < array[j]) {
            array[j+1] = array[j];
            array[j] = temp;
            j--; // refer the udemy video for visual explanation
        }
    }
}


int main() {
    int myArray[] = {6, 4, 2, 5, 1, 3};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    insertionSort(myArray, size);

    for (auto value : myArray) {
        cout << value << " ";
    }
}