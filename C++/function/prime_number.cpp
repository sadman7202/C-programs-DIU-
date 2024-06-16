#include<iostream>
#include<math.h>
using namespace std;
//void normal loop
void primeloop1 (int x)
{
   int i; 
   for(i=2;i<x;i++){
    if(x%i==0){
     cout<<"Non prime"<<endl;   
     break;
    }
  }
  if(i==x){
    cout<<"Prime number"<<endl;
  }
}
bool primeloop2(int y)
{
    for(int i=2;i<=sqrt(y);i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int i,n,a,b;
    cout<<"Enter your number: ";
    cin>>n;
    primeloop1(n);
    cout<<"Enter first and last number: ";
    cin>>a>>b;
    for ( i = a; i <=b; i++)
    {
        if(primeloop2(i)){
            cout<<i<<endl;
        }
    }
    

    
  







    
}