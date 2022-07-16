/*here we are using logic Xor ^ to find unique elements
if we ahve same elements in xor it will become 0 only differnt 
elemnet stays the same*/
#include<iostream>
using namespace std;
int findUnique(int*arr,int n)
{
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{

   int arr[7]={1,2,3,4,1,2,3};
   int a=findUnique(arr,7);
   cout<<a<<endl;
    return 0;

    
}
