// addition class
#include<iostream>
using namespace std;
//creating addition class
class addition {
    public:
    int a,b,c;
    int product(){
        return(a*b*c);
    }
};
int main() {
    addition addition1;
    int a,b,c,product;
    a=addition1.a=22;
     b=addition1.b=30;
      c=addition1.c=50;
      product=addition1.product();
      cout<<"product is:"<<product<<endl;
      return 0;
}