//program for sum of even numbers
#include <iostream>
using namespace std;
int main(){
int a,sum=0;
for(a=1;a<=100;a++){
    if(a%2==0){
        cout<<a<<endl;
        sum=sum+a;
    }

}
cout<<"the sum of the numbers is"
<<sum<<endl;
    return 0;

}


