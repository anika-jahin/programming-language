//Question: Write a program to check if a number is compositer or prime


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    bool flag=true;//true means prime
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;//false means composite
            break;
        }
    }
    if(n==1)
    {
        cout<<"Neither prime nor composite"<<endl;
    }
    else if(flag==true)
    {
        cout<<"Prime"<<endl;
    }else
    {
        cout<<"Composite"<<endl;
    }
  
}