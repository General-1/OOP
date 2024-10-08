#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    void set_name(string new_name) {
        name = new_name;
    }

    void set_age(int new_age) {
        age = new_age;
    }
};

int main() {
    Person person("Alice", 30);
    cout << "Name: " << person.get_name() << ", Age: " << person.get_age() << endl;
 
    person.set_name("Bob");
    person.set_age(35);
    cout << "Updated Name: " << person.get_name() << ", Updated Age: " << person.get_age() << endl;

    return 0;
}