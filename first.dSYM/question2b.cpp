#include <iostream>
using namespace std;

void selectionSort(string arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
 int min = i;

 for (int j = i + 1; j < n; j++) {
 if (arr[j] < arr[min]) {
 min = j;
 }
}

 swap(arr[i], arr[min]);
  }
}

void printArray(string arr[], int n) {
     for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
 }
 cout << endl;
}

int main() {
 string arr[] = {"Kaleem", "Hamza", "Ahmad", "Ali", "Bilal", "Zaheer", "Iqbal"};
 int n = sizeof(arr) / sizeof(arr[0]);

 cout << "Unsorted array in selection sort: ";
 printArray(arr, n);

 selectionSort(arr, n);
 cout << "Sorted array : ";
 printArray(arr, n);

 return 0;
}
