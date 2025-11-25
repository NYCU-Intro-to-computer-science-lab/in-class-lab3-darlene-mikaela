// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

int fibonacci(int n) {
    cout << "SEARCH fib(" << n << ")" << endl;
    cout << "|--";
    if (n==1 || n==2) {
        cout << "|--GET fib(" << n << ") = 1" << endl;
        return 1;
    } else {
        cout << "|--";
        int left = fibonacci(n-1);
        cout << "|--";
        int right = fibonacci(n-2);
        return left+right;
    }
}

int main() {
    int n;
    cin >> n;
    int result = fibonacci(n);
    cout << "GET fib(" << n << ") = " << result << "\n" << result <<  endl;
    
    return 0;
}
