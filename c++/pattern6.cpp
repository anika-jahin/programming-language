/*Question: print the pattern:
a b c d
a b c d
a b c d
a b c d
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
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}