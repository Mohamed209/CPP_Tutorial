#include <iostream>
using namespace std;
// counter class
class Counter
{
    private:
    unsigned int count; // unsigned as no negative counts , private count >> we dont want it to be modified
    public:
    Counter():count(0) // constructor to init counter value to zero
    {}
    ~Counter() // destructor
    {}
    void increment_counter()
    {
        count++;
    }
    unsigned int get_current_count()
    {
        return count;
    }
    void reset_counter()
    {
        count=0;
    }
};
unsigned int add_two_counters(Counter &c1,Counter &c2);
// functions accepts two refrences two counter objects , return their current count sum
unsigned int add_two_counters(Counter &c1,Counter &c2)
{
    return c1.get_current_count()+c2.get_current_count();
}
int main()
{
    Counter c1;
    cout<<c1.get_current_count()<<endl;
    c1.increment_counter();
    c1.increment_counter();
    cout<<c1.get_current_count()<<endl;
    c1.reset_counter();
    cout<<c1.get_current_count()<<endl;
    Counter c2;
    c2.increment_counter();
    cout<<add_two_counters(c1,c2)<<endl;
    return 0;
}
