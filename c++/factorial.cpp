#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=n;
    for(int i=n-1;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
}