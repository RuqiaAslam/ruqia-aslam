#include<iostream>
using namespace std;
class integer
{
int a,b    //member data
public;
    integer()    //default constructor
    {
       a=o;b=o;
    }
    
    
    integer(int i, int j)    // parametric constructor
         {
         a=i;
         b=j;
         }
add()
{
   cout<<(a+b);
   
 }
 /*~integer()
 {   
     cout<<end1<<"we are inside body of destructor";
 }   */
 };
 main()
 {
 integer i;
 integer i1(1o,12);
 i1.add();
 }
 //
