#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"Enter row and coloum:";
    cin>>row>>col;
    for ( i = 1; i <= row; i++)
    {
        for(j=1;j<=col;j++){
            if(i==row || i==1 || j==1 || j==col)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    




    
}