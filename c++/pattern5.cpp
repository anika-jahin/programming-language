/*Question: print the pattern:
A A A A
B B B B
C C C C
D D D D
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    //int col;
    //cout<<"Enter the number of coloumns: ";
    //cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}