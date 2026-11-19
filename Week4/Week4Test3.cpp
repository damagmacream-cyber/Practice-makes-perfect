#include <iostream>
#include <bitset>
using namespace std;

// Shift-and-add multiplication method
int shiftAddMultiply(int multiplicand, int multiplier) {
    int result = 0;
    const int BITS = 4;
    while (multiplier > 0) {
        // If the lowest bit of multiplier is 1, add multiplicand
        if (multiplier & 1) {
            result += multiplicand;
            cout << "result :" << result << endl;
            cout << "result :" << bitset<BITS>(result) << endl;
        }
        // Left shift multiplicand by 1 (multiply by 2)
        multiplicand <<= 1;
        cout << "multiplicand: " << multiplicand << endl;
        cout << "multiplicand: " << bitset<BITS>(multiplicand) << endl;
        // Right shift multiplier by 1 (divide by 2)
        multiplier >>= 1;
        cout << "multiplier: " << multiplier << endl;
        cout << "multiplier: " << bitset<BITS>(multiplier) << endl;
    }
    return result;
}

int main() {
    int q,m;
    cout << "Enter multicand and multiplier: ";
    cin >> q >> m;
    cout << "Product of " << q << " and " << m << " is: " 
         << shiftAddMultiply(q, m) << endl;
         
    return 0;
}

