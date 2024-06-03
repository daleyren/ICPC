#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (1 < n && n <= 3) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  // cout << n / 2;
  for(int i = 1; i <= n/2; i++) {
    if (n/2 + i != n) {
      cout << n/2 + i << " " << i << " ";
    } else {
      cout << n/2 + i << " " << i << endl;
    }
  }

  if (n % 2 == 1) {
    cout << n << endl;
  }
}