#include<iostream>
#include<string>
using namespace std;

class employee {
private:
    string name;
    int bpay, wrhrs, da, hra, bonus, gross;
public:
    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter the basic pay: ";
        cin >> bpay;
        cout << "Enter the working hours: ";
        cin >> wrhrs;
    }

    void result() {
        bonus = 0; // Initialize bonus

        if (wrhrs > 50) {
            bonus = 5000;
            cout << "You are eligible for a 5000 Rs bonus\n";
        }
        else if (wrhrs >= 40) {
            bonus = 2000;
            cout << "You are eligible for a 2000 Rs bonus\n";
        }

        da = (bpay * 10) / 100;
        hra = (bpay * 20) / 100;
        gross = bpay + bonus + da + hra;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Basic Pay: " << bpay << endl;
        cout << "Working Hours: " << wrhrs << endl;
        cout << "Gross Pay: " << gross << endl;
    }
};

int main() {
    employee s;
    s.read();
    s.result();
    s.print();
    return 0;
}
