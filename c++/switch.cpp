#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter the operator: ";
    cin>>ch;
    cout<<"Enter the second number: ";
    cin>>b;
    switch(ch){
        case '+':
            cout<<a+b;
            break;
        case '-':
             cout<<a-b;
             break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Invalid";
    }
}