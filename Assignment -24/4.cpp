

/* 4. Define a function to print Pascal Triangle up to N lines */

#include <iostream>

using namespace std;

int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void printPascalTriangle(int n) {
    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++)
            cout << binomialCoeff(line, i) << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPascalTriangle(n);
    return 0;
}
