/*Question: Print the pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row: ";
    cin>>row;
    int coloumn;
    //cout<<"Enter the number of coloumns: ";
    //cin>>coloumn;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            cout<<j ;
        }
        cout<<endl;
    }
}