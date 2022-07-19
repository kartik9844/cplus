#include<iostream>
#include <cmath>
using namespace std;
class vector
{
private: int arr[100][3],n;
public: 

    void readme()
    {
        cout<<"enter number of vector"<<endl;
        cin>>n;
        cout<<"enter the vectors"<<endl;
        for (int i = 0; i < n; i++)
        {
                cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
            cout<<"\n";
        }
        
   }
  void findE(void)
  {
    int x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
    x=x+arr[i][0];
    y=y+arr[i][1];
    z=z+arr[i][2];
    }
    if (x==0 && y==0 && z==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
  }
};

int main()
{
    vector a;
    a.readme();
    a.findE();
    
    return 0;
    
}
