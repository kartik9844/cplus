// its a normal liner search program 
#include<iostream>
using namespace std;
bool Search(int arr[],int size,int key)
{
 for (int i = 0; i < size; i++)
 {
    if (arr[i]==key)
    {
        return 1;
    }
 }
 return false;
}
int main()
{
   int arr[10]={5,7,-2,8,9,10,4,3,2,1};
   cout<<"enter the element to seardch"<<endl;
   int key;
   cin>>key;
   bool found=Search(arr,10,key);
   if(found)
   {
    cout<<"key found ";
   }
   else
   cout<<"key not found";

    return 0;
    
}
