#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    float grade;

    Student() : name("Unknown"), age(0), grade(0.0) {}
    Student(string n) : name(n), age(0), grade(0.0) {}
    Student(string n, int a) : name(n), age(a), grade(0.0) {}
    Student(string n, int a, float g) : name(n), age(a), grade(g) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1("Chris", 22, 79.4);
    Student s2("Kashik", 20, 78.3);
    Student s3("Sathavi", 22, 88.5);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
