#include <iostream>
using namespace std;

class First {
    private:
        int num;
    public:
        First(int num);
        const First operator+(First & first) const;
        void print() const;
};

// Start implementation for classes
First::First(int num) : num(num) {

}
const First First::operator+(First &first) const {
    return First(num+first.num);
}
void First::print() const {
    cout << "First num = " << num << endl;
}


int main() {

    First first(20);
    First second(20);

    First third = first + second;

    third.print();

    return 0;
}