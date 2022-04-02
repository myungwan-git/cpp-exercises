#include <iostream>
using namespace std;

class First
{
    private:
        int one;
    protected:
        int two;
    public:
        First();
        void print() const;
        int three;
};
class Second : public First
{
    public:
        Second();
        void printSecond() const;
};

First::First()
: one(10), two(20)
{
}
void First::print() const
{
    cout << "1one = " << one << endl;
    cout << "1two = " << two << endl;
    cout << "1three = " << three << endl;
}

Second::Second()
{
    // one = 100;
    two = 200;
    three = 300;
}
void Second::printSecond() const
{
    // cout << "one = " << one << endl;
    cout << "2two = " << two << endl;
    cout << "2three = " << three << endl;
}

int main()
{

    First first;
    first.print();
    
    Second second;
    second.printSecond();

    first.print();
        
    return 0;
}