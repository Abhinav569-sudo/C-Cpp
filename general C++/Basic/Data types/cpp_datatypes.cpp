#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long j;
    char k;
    float l;
    double m;
    cin >> i >> j >> k >> l >> m;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << std::fixed << std::setprecision(3) << l << endl;
    cout << std::fixed << std::setprecision(9) << m << endl;
    return 0;
}
