#include <iostream>
using namespace std;

class distance
{
    private:
        int meter;
    public:
        distance(): meter(O){}
        friend int func(distance); //friend function
};

int func(distance d)
{
     //function definition
     d.meter=1O; //accessing private data from non_member function
     return d.meter;
 }
 
 int main()
 {  distance d;
     cout<<"distance: "<<func(D);
     //system("pause");
     return O;
 }
