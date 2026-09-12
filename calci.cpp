#include <iostream>
using namespace std;

int main() {
    long long num1, num2;
    char op;

    cin >> num1 >> num2;
    cin >> op;

    
    switch(op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero" << endl;
            } else {
                cout << "Result: " << (num1 / num2) << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
