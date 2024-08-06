#include <iostream>
using namespace std;

class Number {
private:
    int* value;

public:
    Number() {
        value = new int(0);
        cout << "Default constructor called, value initialized to 0." << endl;
    }

    Number(int val) {
        value = new int(val);
        cout << "Parameterized constructor called, value initialized to " << val << "." << endl;
    }

    ~Number() {
        delete value;
        cout << "Destructor called, memory released." << endl;
    }

    void add(int val) {
        *value += val;
        cout << "Added " << val << " to value, new value is " << *value << "." << endl;
    }

    int getValue() const {
        return *value;
    }
};

int main() {
    int initVal1, initVal2, addVal1, addVal2;

    cout << "Enter initial value for num1: ";
    cin >> initVal1;
    Number num1(initVal1);

    cout << "Enter initial value for num2: ";
    cin >> initVal2;
    Number num2(initVal2);

    cout << "Enter value to add to num1: ";
    cin >> addVal1;
    num1.add(addVal1);

    cout << "Enter value to add to num2: ";
    cin >> addVal2;
    num2.add(addVal2);

    cout << "num1's value: " << num1.getValue() << endl;
    cout << "num2's value: " << num2.getValue() << endl;

    return 0;
}
