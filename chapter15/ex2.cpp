#include <iostream>
using namespace std;

class A {
    private:

    public:
        template<typename T> void fun(T x);
        ~A();
};

A::~A() {
    cout << "소멸자 호출" << endl;
}

template <typename T>
void A::fun(T x)
{
    cout << "x = " << x << endl;
}

int main() {
    A a;
    a.fun(8);
    a.fun(10);


    return 0;
}