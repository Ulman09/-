#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);
    if (n % 2 == 0) {
        double half = power(x, n / 2);
        return half * half;
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    double base = 2;
    int exp = 5;
    double result = power(base, exp);
    cout << base << "^" << exp << " = " << result << endl;
    
    base = 3;
    exp = -2;
    result = power(base, exp);
    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}
