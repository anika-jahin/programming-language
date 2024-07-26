/*Question: print the pattern
****
****
****
****
*/

#include<iostream>
using namespace std;
int main(){
    int row,coloumn;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of coloumns: ";
    cin>>coloumn;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=coloumn;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}