#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q;
    int sum, sub, mul, mod;
    float div;
    
    cout << "Enter any two numbers:\n";
    cin >> p >> q;

    // It will perform all arithmetic operations
    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = (float)p / q;
    mod = p % q;

    // It will print the final output of all arithmetic operations
    cout << endl;
    cout << "SUM        " << p << " + " << q << " = " << sum << "\n";
    cout << "DIFFERENCE " << p << " - " << q << " = " << sub << "\n";
    cout << "PRODUCT    " << p << " * " << q << " = " << mul << "\n";
    cout << "QUOTIENT   " << p << " / " << q << " = " << div << "\n";
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";
    return 0;
}
