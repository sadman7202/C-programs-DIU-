#include<iostream>
using namespace std;
int main()
{
    char a;
    int num1,num2,sum;
    cout<<"Enter any sign";
    cin>>a;
    switch(a){
        case '+':
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        sum=num1+num2;
        cout<<"Your sum is : "<<sum<<endl;
        break;
        case '-':
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        sum=num1-num2;
        cout<<"Your sum is : "<<sum<<endl;
        break;
        case 'X':
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        sum=num1*num2;
        cout<<"Your sum is : "<<sum<<endl;
        break;
        case '/':
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        sum=num1/num2;
        cout<<"Your sum is : "<<sum<<endl;
        break;

    }




    
}