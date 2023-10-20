#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size-1; step++) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step-1;  ++i  ) 
    {
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;




      }
    }
  }
}

// print array
void printArray(int array[], int size) 
{

  for (int i = 0; i < size; i++) 
  {
    cout << "  " << array[i];
  }

  cout << "\n";

}

int main() {

int size1;
 
  cout<<"enter the size of the array"<<endl;

  cin>>size1;
 
  int data[size1];
  
  // find array's length
//   int size = sizeof(data) / sizeof(data[0]);
     
     for(int i=0; i<size1;i++)
     {
        cout<< "enter the"<<i+1<<"element of array" <<endl;
        cin>>data[i];
     }





  bubbleSort(data, size1);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size1);
  cout<<"sizeof(data[1]): "<<sizeof(data[0])<<endl;
  cout<<"sizeof(data): "<<sizeof(data)<<endl;



}