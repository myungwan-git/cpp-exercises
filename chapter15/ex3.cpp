#include <iostream>
using namespace std;

class Oper {
    private:
        int x;
        long int y;
        double z;
    public:
        template<typename T> T res(T x);
};

template<typename T>
T Oper::res(T x) {
    
}

int main() {



    return 0;
}