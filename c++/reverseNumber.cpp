//Question: Write a program to print reverse of a given number.

#include<iostream>
using namespace std;
int main(){
    int n,last_digit;
    cout<<"Enter the value of n: ";
    cin>>n;
    int reverse=0;
    while(n!=0){
        last_digit=n%10;
         reverse=reverse*10+last_digit;
        n=n/10;
    }
    cout<<reverse;
}