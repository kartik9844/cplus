// i am swaping altern elements 
#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n)
{
    for (int i = 0; i < n; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
}
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}


int main()
{
   int arr[6]={1,2,3,4,5,6 };
   swapAlternate(arr,6);
   display(arr,6);
    return 0;
    
}
