#include <iostream>
using namespace std;

int main ()
{
int number;
cout<<"Enter the number you want to find"<<endl;
cin>>number;
 
     int size=5;

   int Ar[5]={20,30,40,50,60};
    
    bool found=false;



  for (int i=0 ; i<size; i++)
  {
       if (Ar[i]==number)
       {
        cout<< "The index of particular number is  "<<i<<endl;
        found=true;
        break;
       }
         }
       if (!found)
       {
        cout<< "-1"<<endl;
       }

  

return 0;
}

