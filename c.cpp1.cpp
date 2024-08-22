#include <iostream>
#include <cstring> // For handling strings
using namespace std;

class student {
private:
    char name[100]; // Array to hold the name as a string
    int regno, sub[3];
    float total, avg;

public:
    void read() {
        cout << "Enter name: ";
        cin.ignore(); // Ignore any leftover newline characters in the input buffer
        cin.getline(name, 100); // Use getline to read the entire name including spaces
        cout << "Enter registration number: ";
        cin >> regno;
        cout << "Enter the marks of three subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> sub[i];
        }
    }

    void result() {
        total = 0;
        for (int i = 0; i < 3; i++) {
            total += sub[i];
        }
        avg = total / 3;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regno << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    student s;
    s.read();
    s.result();
    s.print();
    return 0;
}
