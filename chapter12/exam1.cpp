#include <iostream>
using namespace std;

class First {
    private:
        int num;
    public:
        // First();
        ~First();
        void print() const;

};

// First::First() : num(500) {

// }
First::~First() {
    cout << "~First() execute ! " << endl;
}
void First::print() const {
    cout << "num = " << num << endl;
}

int main() {

    First first;
    first.print();

    return 0;
}