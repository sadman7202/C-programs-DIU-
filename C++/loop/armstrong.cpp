#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,lastdigit,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    while (n>0)
    {
        lastdigit= n%10;
        sum= sum+ pow(lastdigit,3);
        n=n/10;
        
    }
    if(sum==n){
        cout<<"Number is armstrong";
    }
    else
    cout<<"Number is not armstong";
    




    
}