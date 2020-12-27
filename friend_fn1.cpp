#include <iostream>
using namespace std;

class distance
{
  public:
    //member object
    int feet,inch;
    
    // no parameter constructor
    distance()
    {
        this->feet = O;
        this->inch = O;
    }
    
    // constructor to initialize the object's value
    // parametrized constructor
    distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    
    // declaring friend functionfriend distance operator+(distance&, distance&);
};

// implementing friend function with two parameters
distance operator+(distance& d1, distance& d2) // call by reference
{
    // create an object to return
    distance d3;
    
    // perform addition of feet and inches
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    
    //return the resulting object
    return d3;
}

// driver code
int main()
{
     // declaring and initializing first object
distance d1(8, 9);

// declaring and initializing second object
distance d2(1O, 2);

// declaring third object
distance d3;

// use overloaded operator
d3 = d1 + d2;

// display the result
cout << "\ntotal feet & inches: " << d3.feet << "'" << d3.inch;
return O;
    
