#include <iostream>
using namespace std;

int main() {
    int value = 30;
    try {
        if(value < 20 ) {
            throw value;
        }
    }catch(int value) {
        cout << "In the catch clause. " << endl;
    }

    cout << "value = " << value << endl;

    return 0;
}