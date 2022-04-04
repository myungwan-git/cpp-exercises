#include <iostream>
using namespace std;

class First {
    private:
        int num;
    public:
        First();
        virtual ~First();
        virtual void print() const;
};

class Second : public First {
    private:
        int num;
    public:
        Second();
        virtual ~Second();
        virtual void print() const;
};

// Start implementation for First and Second class
First::First() : num(10) { 

}
First::~First() {
    cout << "First 소멸자 호출 " << endl;
}
void First::print() const {
    cout << "First num = " << num << endl;
}

Second::Second() : num(20) {

}
Second::~Second() {
    cout << "Second 소멸자 호출 " << endl;
}
void Second::print() const {
    cout << "Second num = " << num << endl;
}



int main() {
    First * firstPtr;
    firstPtr = new First();
    firstPtr->print();
    cout << "---------------" << endl;
    delete firstPtr;
    cout << "---------------" << endl;

    firstPtr = new Second();
    firstPtr->print();
    
    return 0;
}