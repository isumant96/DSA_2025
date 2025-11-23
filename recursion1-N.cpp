#include <iostream>
using namespace std;

void PrintOneTon(int i, int n) {
    if (i > n) return;   // base case (stop when i becomes greater than n)

    cout << i << " ";    // print current number
    PrintOneTon(i + 1, n); // recursive call
}

int main() {
    int n;
    cin >> n;
    PrintOneTon(1, n);
    return 0;
}
  