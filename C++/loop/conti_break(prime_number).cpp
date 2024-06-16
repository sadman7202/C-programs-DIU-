#include<iostream>
using namespace std;
int main()
{
  int i,n;
  cout<<"Enter your number:";
  cin>>n;
  for(i=2;i<n;i++){
    if(n%i==0){
     cout<<"Non prime"<<endl;   
     break;
    }
  }
  if(i==n){
    cout<<"Prime number"<<endl;
  }
  return 0;
    
    
    






    
}