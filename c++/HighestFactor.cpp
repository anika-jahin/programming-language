#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int x=1;
    for(int i=1;i<n;i++)//method 1
    {
        if(n%i==0)
        {
         x=i;
        }   
    }
      cout<<x<<endl;


for(int i=n/2;i>1;i--)//method 2
    {
        if(n%i==0)
        {
         x=i;
         break;
        }   
    }
      cout<<x<<endl;
}