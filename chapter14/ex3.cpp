#include <iostream>
using namespace std;

void fun(int x) {
    if(x > 0) {
        throw 100;
    }
}

void fun2(int x) throw(int) {
    if(x > 0) {
        throw 100;
    }
}

void fun3(double x) throw(double) {
    if(x < 10.0) {
        throw 1000.0;
    }
}

void noException() noexcept {
    cout << "noException !!! " << endl;
}

int main() {
    
    try {
        // fun(10);
        // fun2(10);
        fun3(1.4);
    } catch(double x) {
        cout << " x = " << x << endl;
    }

    noException();

    return 0;
}