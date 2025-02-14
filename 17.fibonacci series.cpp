#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    cout << first << " " << second << " ";
    
    for (int i = 2; i < n; ++i) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    
    return 0;
}

