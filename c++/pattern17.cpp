/*Question: Print the pattern
  *   *
   * * 
    *  
   * * 
  *   *
  Enter odd number */

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the rows: ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==j || (j+i)==row+1)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl; 
    }
}