#include <iostream>
using namespace std;

class First {
    public:
        First();
        virtual void print() const;
        virtual ~First();
};

class Second : virtual public First {
    public:
        Second();
        virtual void print() const;
        virtual ~Second();
};


First::First() {

}
void First::print() const {
    cout << "first" << endl;
}
First::~First() {
    cout << "~First() ! " << endl;
}

Second::Second() {
    
}
void Second::print() const {
    cout << "second" << endl;
}
Second::~Second() {
    cout << "~Second() ! " << endl;
}

int main() {

    // First first;
    // first.print();

    // Second second;
    // second.print();

    First *firstPtr;
    firstPtr = new First();
    firstPtr->print();
    delete firstPtr;
    cout << "===================== firstPtr delete ( First class ) " << endl;
    
    firstPtr = new Second();
    firstPtr->print();
    cout << "------------------" << endl;
    delete firstPtr;
    cout << "------------------" << endl;

    // cout << " ================ " << endl;
    // delete firstPtr;
    // firstPtr = new Second();
    // firstPtr->print();

    return 0;
}