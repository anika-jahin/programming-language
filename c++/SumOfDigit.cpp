//Question: Write a program to print sum of digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n,last_digit,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;

    while(n!=0)
    {
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
        
    }
    cout<<sum;
}