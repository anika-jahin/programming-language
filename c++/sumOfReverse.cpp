//Question: Write a program to print the sum of given number and its reverse;

#include<iostream>
using namespace std;
int main(){
    int n,last_digit;
    cout<<"Enter the value of n: ";
    cin>>n;
    int previous=n;
    int reverse=0;
    while(n!=0){
        last_digit=n%10;
         reverse=reverse*10+last_digit;
        n=n/10;
    }
    int sum=previous + reverse;
    cout<<sum;
}