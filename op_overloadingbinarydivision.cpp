#include <iostream>
using namespace std;
class A
{

  int x;
    public:
  A()
  {}
  A(int i)
  {
    x=i;
  }
 void operator/(A);
 void display();
};
/*
void A :: display()
{
    this.x=s;   
}
*/
void A :: operator/(A a)
{
   int m = x/a.x;   //a1.x/a2.x;
   cout<<"the result of the division of two objects is : "<<m;
   
}
int main()
{  
    A a1(5);
    A a2(2.5);
    // a1.display();
     a1/a2;  //a1./(a2);
     return o;
}
