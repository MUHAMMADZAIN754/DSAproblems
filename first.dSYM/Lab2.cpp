#include<iostream>
using namespace std;



  // we have to implement the stack by using the array
  int stack[5] ,n=5 ,top=-1;

  // now we have to insert the value so in order to insert the values we have to check whether the stack is full or not

   void push(int val) 
   { 
   if (top>=5)  
  {
  cout<<"Stack overflow"<<endl;   
  }
  else 
   {
    stack[top]=val;
    top++;
   }

}

void pop()
{
 if (top<=-1)
 {
    cout<<"Stack Underflow"<<endl;
 }
else
{
  cout<<"The stack value is "<<stack[top]<<endl;
top--;
}
}

void Display()
{
if (top>=0)
{

cout<<"stack elements are :";

for(int i=top; i>=0; i--)
{
  cout<<stack[i]<<endl;
}
}
else
{
cout<<"Is empty"<<endl;
}
}

int main ()
{
int ch, val;

cout<<"Press 1 to push in stack"<<endl;

cout<<"press 2 to pop in stack"<<endl;

cout<<" Press 3 to display  the elements in stack "<<endl;

cout<<" Press 4 to exit "<<endl;


do{
cout<<"Enter choice"<<endl;
cin>>ch;

if (ch==1)
{
    
}






}
while(ch!=4)
{







}






 



















    return 0;

}