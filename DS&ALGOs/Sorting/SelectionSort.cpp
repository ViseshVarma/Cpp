/*  In Selection sort we will select the element that is smallest and then we will 
    switch the element to the starting element. we repeat the process until the 
    elements are sorted  */


#include <iostream>

using namespace std;

void selectionSort(int array[], int size){
    for(int i = 0; i < size; i++){
        int minIndex = int n;
        for(int j=i+1; j < size; j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }        
        if(i != minIndex) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

int main() {
    int myArray[] = {6, 4, 2, 5, 1, 3};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    selectionSort(myArray, size);

    for (auto value : myArray) {
        cout << value << " ";
    }
}