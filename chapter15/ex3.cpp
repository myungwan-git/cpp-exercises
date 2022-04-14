#include <iostream>
using namespace std;

class Oper {
    private:
        int x;
        long int y;
        double z;
    public:
        template <typename T, std::size_t N> void res(T (&x)[N]);
};

template <typename T, std::size_t N>
void Oper::res(T (&x)[N]) {
    static_assert(N>0, "배열의 크기는 0 이상이어야 합니다.");
    T result;
    for(auto && var : x) {
        cout << var << " ";
        result += var;
    }
    
    cout << endl;

    cout << sizeof(x) << endl;
    cout << "result = " << result << endl;
    
}


int main() {
    int arr[3] = {1,2,3};
    Oper oper;
    oper.res(arr);

    double dArr[3] = {1.44,2.14, 3.11};
    oper.res(dArr);

    return 0;
}