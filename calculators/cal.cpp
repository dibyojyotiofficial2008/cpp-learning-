#include <iostream>
using namespace std;
int main() {
    double a,b;
    cout <<"ENTER YOUR NUMBERS: ";
    cin >> a >> b;
    cout << "SUM: " << a + b << endl;
    cout << "DIFFERENCE: " << a - b << endl;
    cout << "PRODUCT: " << a * b << endl;
    if (b != 0) {
        cout << "QUOTIENT: " << a / b << endl;
    } else {
        cout << "QUOTIENT: Division by zero is not allowed." << endl;
    }
    return 0;
}