/*Question:print the pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    int col;
    //cout<<"Enter the number of coloumns: ";
    //cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            cout<<i ;
        }
        cout<<endl;
    }
}