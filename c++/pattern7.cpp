/*Question: print the pattern:
*
**
***
****
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
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}