#include <iostream>
using namespace std;

class First
{
    private:
        int a;
    public:
        First(int a);
        void print() const;
};
First::First(int a)
:a(a)
{

}
void First::print() const
{
    cout << "first a = " << a << endl;
}

class Second : public First
{
    private:
        int b;
    public:
        Second(int a, int b);
        void print() const;
};
Second::Second(int a, int b)
:First::First(a) ,b(b)
{

}
void Second::print() const
{
    First::print();
    cout << "second b = " << b << endl;
}

class Third : public Second
{
    private:
        int c;
    public:
        Third(int a, int b, int c);
        void print() const;
};
Third::Third(int a, int b, int c)
:Second::Second(a,b), c(c)
{

}
void Third::print() const
{
    Second::print();
    cout << "third c = " << c << endl;
}

int main()
{
    First first(10);
    first.print();
    
    Second second(100,200);
    second.print();

    Third third(1000,2000,3000);
    third.print();

    return 0;
}