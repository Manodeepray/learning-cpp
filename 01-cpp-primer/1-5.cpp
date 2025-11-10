#include <iostream>
using namespace std;

class A {
private:
    int secret = 42;          // private data member, only accessible within class A by default

    friend class B;           // declares class B as a *friend* of A
};

class B {
public:
    void showSecret(A obj) {  // member function of class B
        cout << "A's secret is " << obj.secret << endl;
    }
};

int main() {
    A a;                      // create an object of class A
    B b;                      // create an object of class B
    b.showSecret(a);          // B calls its function and accesses A's private member
    return 0;
}
