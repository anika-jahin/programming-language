/*Question: Print the pattern
  ******
  *    *
  *    *
  ****** */

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the rows: ";
    cin>>row;
    int col;
    cout<<"Enter the coloumns: ";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1|| i==row || j==1 || j==col)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl; 
    }
}