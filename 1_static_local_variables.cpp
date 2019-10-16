#include <iostream>

using namespace std;
void greet_me()
{
    static int counter; // static variable is always initialized with 0 and lies in heap not in stack 
    if (counter<=3)
    {
        cout<<"Hello "<<"Mossad :)"<<endl;
        counter++;
        return ;
    }
    else
    {
        cout<<"reached maximum greetings :("<<endl;
        return ;
    }
}
int main()
{
    for (int i=0;i<=5;i++)
    {
        greet_me();
    }
    return 0;
}