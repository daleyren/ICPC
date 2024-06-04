#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  long long a, b, diff;
  for(int i = 0; i < t; i++) {
    cin >> a;
    cin >> b;
    if (a == b && a % 3 == 0) {
      cout << "YES" << endl;
      continue;
    }

    // Could maybe use absolutely value but don't know how it works w/ long long values
    if (a > b) {
      diff = a - b;
    } else {
      diff = b - a;
    }
    
    // Impossible off rip
    if (diff > a || diff > b) {
      cout << "NO" << endl;
      continue;
    }

    // General Case
    if ((min(a, b) - diff) % 3 == 0) {
      cout << "YES" << endl;
      continue;
    }

    cout << "NO" << endl;
  }
}