
#include <iostream>
using namespace std;

void insertionSort(string arr[], int n)
 {

 for (int i = 1; i < n; i++) {
 string key = arr[i];
 int j = i - 1;

 while (j >= 0 && arr[j] > key) {
 arr[j + 1] = arr[j];
 j--;
 
 }

 arr[j + 1] = key;

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

 cout << "Unsorted array: ";
 printArray(arr, n);

 insertionSort(arr, n);

 cout << "Sorted array: ";
 printArray(arr, n);

 return 0;
}












