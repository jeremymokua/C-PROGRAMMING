//program for even numbers using while loop
#include<iostream>
using namespace std;
int main()
{
int a, firstNum,lastNum,sum=0;
cout<<"enter first number";
cin>>firstNum;
cout<<"enter first number";
cin>>lastNum;
a=firstNum;
while(a<=lastNum){
if(a%=2==0){
    cout<<a<<endl;
    sum=sum+a;
}
a++;
}
cout<<"the sum of the numbers is"
<<sum<<endl;
return 0;
}