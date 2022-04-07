#include <iostream>
using namespace std;

class First {
    private:
        int num;
    public:
        First();
        void print() const;
        friend First operator+(int num, First & first);
};
First::First() : num(30) {

}
void First::print() const {
    cout << "num = " << num << endl;
}

First operator+(int num, First & first) {
    first.num += num;
    return first;
}

int main() {

    First first;
    first.print();
    First second = 10 + first;
    second.print();

    return 0;
}