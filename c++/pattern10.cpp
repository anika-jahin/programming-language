/*Question: print the pattern:
1
AB
123
ABCD
12345
*/

#include<iostream>
using namespace std;
int main(){
    int row,j,k,n;
    cout<<"Enter the number: ";
    cin>>n;
   
    for(row=1;row<=n;row++)
    {

         if(row%2!=0){
        for(j=1;j<=row;j++)
        {
            cout<<j<<" ";
        }
         }else
         {
            for(k=1;k<=row;k++)
            {
                cout<<(char)(k+64)<<" ";
             }
         
            }
            cout<<endl;
    }
}