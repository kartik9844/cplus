//this programyou are reversing the array only
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int s=0,end=n-1;
    while (s<=end)
    {
        swap(arr[s],arr[end]);// this just a swap function
        s++;
        end--;
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
 reverse(arr,6);
 display(arr,6);

    return 0;
    
}
 