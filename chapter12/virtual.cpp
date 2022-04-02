#include <iostream>
using namespace std;

class First {
    public:
        virtual void print() const;
        virtual ~First();
};

class Second : public First {
    public:
        virtual void print() const;
        virtual ~Second();
};


First::First() {

}
void First::print() const {
    cout << "first" << endl;
}

Second::Second() {
    
}
void Second::print() const {
    cout << "second" << endl;
}

int main() {

    First first;
    first.print();

    return 0;
}