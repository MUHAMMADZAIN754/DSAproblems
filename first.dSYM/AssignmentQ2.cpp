#include<iostream>
using namespace std;

int main()
{

// Question # 2:
// Write a program that takes an array of integers of size 7 as input and returns the sum of all the elements. and then delete the value at 0 index and again return the sum of that array. 

int size=7;
  int Arr[size]; 

for (int i=0; i<=size; i++)
{
cout<<"Enter  the "<<i+1<<" element of Array" <<endl;
cin>>Arr[i] ;
}

cout<<"Your entered array is "<<endl;

for(int i=0;i<=size ; i++) 
{
 cout<<Arr[i]<<endl;
}

//Now We have to calculate the Sum for the elements of the Array

int sum=0;

for(int i=0;i<=7 ; i++) 
{
 sum+=Arr[i];
}


cout<<"The sum of array elements  is "<<sum<<endl;

// Now we have to delete the value of Zero Index



size++;
for(int i=size; i>=1;i--) {
 
 Arr[i]= Arr[i-1];
 
}
Arr[0]=0;

cout<<size;
cout << "The array elements after deletion :"<<endl;

for( int i = 0; i<=size; i++) 
{  
 cout << "LA[" << i << "] = " << Arr[i] <<endl;

}

for (int i=0; i<size;i++)
{
sum+=Arr[i];
}

cout<<"the sum of array  after deleting is "<<sum<<endl;



return 0;
}

