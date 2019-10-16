/*
Suppose you want to pass an argument by reference for efficiency, but not only do you want
the function not to modify it, you want a guarantee that the function cannot modify it.
*/
#include <iostream>

using namespace std;
int sum_two_vars(int& a,int& b);
int sum_two_vars_one_const(int& a,const int& b);
int main()
{
    int aar=10;
    int bar=20;
    cout<<sum_two_vars(aar,bar)<<endl; // ok , should print 30
    cout<<sum_two_vars_one_const(aar,bar);
    return 0;
}
int sum_two_vars(int& a,int& b)
 {
     return b=a+b;
 }
 int sum_two_vars_one_const(int& a,const int& b)
 {
     return b=a+b; // error cant modify const value
 }

