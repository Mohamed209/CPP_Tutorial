/**
 * Besides passing values by reference, you can also return a value by reference. Why you would
    want to do this may seem obscure. One reason is to avoid copying a large object, as we’ll see
    in Chapter 11, “Virtual Functions.” Another reason is to allow you to use a function call on the
    left side of the equal sign. This is a somewhat bizarre concept, so let’s look at an example
 * */
#include <iostream>

using namespace std;
int x;
int& setx()
{
    return x;
}
int& sety()
{
   int y=7; // you cant reference to local variables as they are destroyed when function return
   return y;
}
int main()
{
   setx() = 92;
   cout << "x=" << x <<endl;
   sety() = 40; // error
   cout << "y=" << x <<endl;
   return 0;
}