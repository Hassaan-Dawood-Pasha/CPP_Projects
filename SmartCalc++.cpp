#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void showInstructions() {
    cout << "-------- INSTRUCTIONS --------" << endl;
    cout << "1. For basic arithmetic, enter two operands." << endl;
    cout << "   Supported: +, -, *, /, %, > (max), < (min)" << endl;
    cout << "2. For advanced operations (e.g., trigonometry, logs):" << endl;
    cout << "   Enter one operand for functions like sin, cos, ln, etc." << endl;
    cout << "3. Supported Commands:" << endl;
    cout << "   - Trigonometric: sin, cos, tan, cot, sec, cosec" << endl;
    cout << "   - Hyperbolic: hsin, hcos, htan, hcosec, hsec, hcot" << endl;
    cout << "   - Roots: sqrt (square root), cbrt (cube root)" << endl;
    cout << "   - Logarithms: ln (natural log), log (base-10 log)" << endl;
    cout << "   - Exponents: e (exp), ^ (power)" << endl;
    cout << "--------------------------------" << endl;
}

int main() {
    cout << "WELCOME TO PASHA'S CALCULATOR" << endl;

    cout << "-------- AVAILABLE OPERATIONS --------" << endl;
    cout << "Basic Arithmetic: +, -, *, /, %" << endl;
    cout << "Max/Min: > (max), < (min)" << endl;
    cout << "Trigonometric: sin, cos, tan, cot, sec, cosec" << endl;
    cout << "Hyperbolic: hsin, hcos, htan, hcosec, hsec, hcot" << endl;
    cout << "Roots: sqrt (square root), cbrt (cube root)" << endl;
    cout << "Logarithms: ln (natural log), log (base-10 log)" << endl;
    cout << "Exponents: e (exp), ^ (power)" << endl;
    cout << "--------------------------------------" << endl;
    
    cout << "Enter operation : ";
    string operation;
    cin >> operation;

    double a, b;
    bool isUnary = false; // Flag for operations requiring only one operand

    // Check if the operation requires one or two operands
    if (operation == "sin" || operation == "cos" || operation == "tan" || operation == "cot" ||
        operation == "sec" || operation == "cosec" || operation == "hsin" || operation == "hcos" || 
        operation == "htan" || operation == "hcosec" || operation == "hsec" || operation == "hcot" ||
        operation == "sqrt" || operation == "cbrt" || operation == "ln" || operation == "log" || operation == "e") {
        isUnary = true;
    }

    if (isUnary) {
        cout << "Enter operand: ";
        cin >> b;
    } else {
        cout << "Enter first operand: ";
        cin >> a;
        cout << "Enter second operand: ";
        cin >> b;
    }

    // Perform operations
    if (operation == "+") {
        cout << "Result: " << a + b << endl;
    } else if (operation == "-") {
        cout << "Result: " << a - b << endl;
    } else if (operation == "*") {
        cout << "Result: " << a * b << endl;
    } else if (operation == "/") {
        if (b == 0) cout << "Error: Division by zero" << endl;
        else cout << "Result: " << a / b << endl;
    } else if (operation == "%") {
        cout << "Result: " << int(a) % int(b) << endl;
    } else if (operation == ">") {
        cout << "Result: " << max(a, b) << endl;
    } else if (operation == "<") {
        cout << "Result: " << min(a, b) << endl;
    } else if (operation == "sin") {
        cout << "Result: " << sin(b) << endl;
    } else if (operation == "cos") {
        cout << "Result: " << cos(b) << endl;
    } else if (operation == "tan") {
        cout << "Result: " << tan(b) << endl;
    } else if (operation == "cot") {
        cout << "Result: " << 1 / tan(b) << endl;
    } else if (operation == "sec") {
        cout << "Result: " << 1 / cos(b) << endl;
    } else if (operation == "cosec") {
        cout << "Result: " << 1 / sin(b) << endl;
    } else if (operation == "hsin") {
        cout << "Result: " << sinh(b) << endl;
    } else if (operation == "hcos") {
        cout << "Result: " << cosh(b) << endl;
    } else if (operation == "htan") {
        cout << "Result: " << tanh(b) << endl;
    } else if (operation == "hcosec") {
        cout << "Result: " << 1 / sinh(b) << endl;
    } else if (operation == "hsec") {
        cout << "Result: " << 1 / cosh(b) << endl;
    } else if (operation == "hcot") {
        cout << "Result: " << 1 / tanh(b) << endl;
    } else if (operation == "^") {
        cout << "Result: " << pow(a, b) << endl;
    } else if (operation == "sqrt") {
        cout << "Result: " << sqrt(b) << endl;
    } else if (operation == "cbrt") {
        cout << "Result: " << cbrt(b) << endl;
    } else if (operation == "e") {
        cout << "Result: " << exp(b) << endl;
    } else if (operation == "ln") {
        cout << "Result: " << log(b) << endl;
    } else if (operation == "log") {
        cout << "Result: " << log10(b) << endl;
    } else {
        cout << "Invalid operation entered." << endl;
    }

    return 0;
}
