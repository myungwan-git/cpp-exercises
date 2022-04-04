#include <iostream>
using namespace std;

class First {
    private:
        int num;
    public:
        const First operator+() const;
        void print() const;
        int result(int num1, int num2) const;
    
};

class Second {
    private:
        int num;
    
};

// Start implementation for classes
int First::result(int num1, int num2) const {
    return (num1+num2);
}

const First First::operator+() const {
    
}

int main() {


    return 0;
}