#include <iostream>
using namespace std;

int main() {
    int val = 31;
    
    try {
        if(val > 30) throw val;
    } catch(int x) {
        cout << "val > 30 이면 throw가 발생합니다. 현재 받은 값은 = " << x << endl;
    }

    cout << "val = " << val << endl;

    return 0;
}