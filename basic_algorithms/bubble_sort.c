#include <stdio.h>

// Perform the bubble sort
void bubbleSort(int array[], int size) {

  // Loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // Loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // Compare two adjacent elements
      // Change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // Swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// Print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // Find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}