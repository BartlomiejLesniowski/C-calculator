#include <iostream>

using namespace std;

// Create the function to perform mathematical operations
double calculator(double a, double b, char operation) {
    switch (operation) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                cout << "Error! Division by 0!" << endl;
                return 0;
            }
        default:
            cout << "Unknown operation!" << endl;
            
            return 0;
    }
}

int main() {
    double num1, num2;
    char oper;

    cout << "Please enter the first number, the operator (+, -, * or /) and the second number!" << endl;
    cin >> num1 >> oper >> num2;
    double result = calculator(num1, num2, oper);
    cout << num1 << oper << num2 << "=" << result;

    return 0;
}