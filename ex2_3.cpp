#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int privateDataA;

public:
    ClassA(int data) : privateDataA(data) {}

    friend void showData(const ClassA&, const ClassB&);
    
    friend class ClassB;
};

class ClassB {
private:
    int privateDataB;

public:
    ClassB(int data) : privateDataB(data) {}

    friend void showData(const ClassA&, const ClassB&);

    void accessClassA(const ClassA& a) {
        cout << "ClassB accessing ClassA private data: " << a.privateDataA << endl;
    }
};

void showData(const ClassA& a, const ClassB& b) {
    cout << "ClassA private data: " << a.privateDataA << endl;
    cout << "ClassB private data: " << b.privateDataB << endl;
}

int main() {
    ClassA a(10);
    ClassB b(20);

    showData(a, b);

    b.accessClassA(a);

    return 0;
}
