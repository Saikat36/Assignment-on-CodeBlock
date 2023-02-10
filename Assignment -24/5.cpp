

/* 5. Define a function to check whether a given number is a term in a Fibonacci series or not. */


#include <iostream>

using namespace std;

bool isPerfectSquare(int x) {
    int i = 1;
    while (i * i < x) {
        i++;
    }
    return (i * i == x);
}

bool isFibonacci(int n) {
    int a = 5 * n * n;
    return isPerfectSquare(a + 4) || isPerfectSquare(a - 4);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isFibonacci(n))
        cout << n << " is a Fibonacci number\n";
    else
        cout << n << " is not a Fibonacci number\n";
    return 0;
}

