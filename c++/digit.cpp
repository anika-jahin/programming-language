//Question: Write a program to count digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n,a,x=0;
    cout<<"Enter the value of n: ";
    cin>>n;

    while(n!=0)
    {
        n=n/10;
        x++;
    }
    cout<<x;
}