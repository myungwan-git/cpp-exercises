#include <iostream>
using namespace std;

class First {
    private:
        int fir;
    public:
        First(int fir);
        virtual ~First();
        virtual void print() const;
};

class Second : public First {
    private:
        int secon;
    public:
        Second(int fir, int secon);
        virtual ~Second();
        virtual void print() const;
};

First::First(int fir) : fir(fir) {
    
}
First::~First() {
    cout << "First 소멸자 " << endl;
}
void First::print() const {
    cout << "fir = " << fir << endl;
}

Second::Second(int fir, int secon) : First::First(fir), secon(secon) {

}
Second::~Second() {
    cout << "Second 소멸자 " << endl;
}
void Second::print() const {
    cout << "secon = " << secon << endl;
}

int main() {

    First * ptrFirst;

    First first(10);
    Second second(100,200);
    
    ptrFirst = &first;
    ptrFirst->print();

    ptrFirst = &second;
    ptrFirst->print();

    return 0;
}



