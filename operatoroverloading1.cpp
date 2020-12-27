#include <iostream>
using namespace std;
class test
{
  private:
     int num;
  public:
     test()
     {
        num=8;
     }
     void operator ++()
     {
       num = num+2;
     }
     void print();
     {
        cout<<"the count is : "<<num;
     }
};

int main()
{
    test tt;
    ++tt;   // calling of a function "void operator ++()"
    tt.print();
    return 0;
}
