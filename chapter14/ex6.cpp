#include <iostream>
using namespace std;

void fun(int x) throw(int) {
    if(x > 1000) throw 55555;
}

int main() {
    try {
        fun(1004);
    }catch(int value) {
        cout << "value = " << value << endl;
    }

    return 0;
}