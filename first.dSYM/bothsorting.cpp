#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size, bool ascending) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while ((ascending && key < array[j]) || (!ascending && key > array[j] && j >= 0)) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void bubbleSort(int array[], int size, bool ascending) {
  for (int step = 0; step < size - 1; step++) {
    for (int i = 0; i < size - step - 1; ++i) {
      if ((ascending && array[i] > array[i + 1]) || (!ascending && array[i] < array[i + 1])) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

int main() {
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  
  int data[size]; // Declare an array of the user-provided size
  
  cout << "Enter " << size << " elements:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> data[i]; // Input each element
  }
  
  int choice;
  cout << "Choose sorting method:\n";
  cout << "1. Bubble Sort\n";
  cout << "2. Insertion Sort\n";
  cin >> choice;
  
  int orderChoice;
  cout << "Choose order:\n";
  cout << "1. Ascending\n";
  cout << "2. Descending\n";
  cin >> orderChoice;
  
  bool ascending = (orderChoice == 1);
  
  if (choice == 1) {
    bubbleSort(data, size, ascending);
    cout << (ascending ? "Sorted using Bubble Sort in ascending order:" : "Sorted using Bubble Sort in descending order:") << endl;
  } else if (choice == 2) {
    insertionSort(data, size, ascending);
    cout << (ascending ? "Sorted using Insertion Sort in ascending order:" : "Sorted using Insertion Sort in descending order:") << endl;
  } else {
    cout << "Invalid choice.\n";
    return 1;
  }
  
  printArray(data, size);
  
  return 0;
}