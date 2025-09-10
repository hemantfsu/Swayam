#include <bits/stdc++.h>
using namespace std;

void ReverseCounting(int n) {
    if (n == 0) return;   // base case
    cout << n << " ";
    ReverseCounting(n - 1);
}

int main() {
    int n;
    cin >> n;
    ReverseCounting(n);
    cout << endl;
    return 0;
}

// This is also known as tail recursion