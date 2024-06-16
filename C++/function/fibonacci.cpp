#include<iostream>
using namespace std;
//fibonacci series
void fibonacci(int x)
{
    int t1=0,t2=1,nextn;
    for (int i = 0; i <=x; i++)
    {
       cout<<t1<<endl;
       nextn=t1+t2;
       t1=t2;
       t2=nextn;
    }
}
void factoral (int y)
{
    int factorial=1;
    for (int i=2; i <= y;i++)
    {   
       factorial= factorial*i;
    }
    cout<<"Your factorial is: "<<factorial<<endl;
    
}
    




int main()
{
    int n,f;
    cout<<"Enter term for fibonacci: ";
    cin>>n;
    fibonacci(n);
    cout<<"Enter number for factorail: "<<endl;     
    cin>>f;
    factoral(f);






    
}