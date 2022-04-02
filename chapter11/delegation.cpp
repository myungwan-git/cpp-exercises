#include <iostream>
using namespace std;

class First
{
    private:
        int a;
    public:
        void set(int a);
        void print() const;
};

class Second : public First
{
    private:
        int b;
    public:
        void set(int a, int b);
        void print() const;
};

void First::set(int a)
{
    this->a = a;
}
void First::print() const
{
    cout << "first print a = " << a << endl;
}

void Second::set(int a, int b)
{
    First::set(a);
    this->b = b;
}
void Second::print() const
{
    First::print();
    cout << "second print b = " << b << endl;
}

int main()
{
    First first;
    first.print();
    first.set(10);
    first.print();

    Second second;
    second.print();
    second.set(100,20);
    second.print();
    
    
    return 0;
}