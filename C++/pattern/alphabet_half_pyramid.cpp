#include<iostream>
using namespace std;
int main(){
char input,alpha='A';
cout<<"Enter the character of last row ";
cin>>input;
input=toupper(input);
for(int i=1;i<=input-'A'+1;i++){
    for(int j=1;j<=i;j++){
        cout<<alpha<<" ";

    }
    alpha++;
    cout<<endl;
}
return 0;








}
