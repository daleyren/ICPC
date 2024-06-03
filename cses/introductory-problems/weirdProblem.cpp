#include <iostream>
using namespace std;

int main() {
  /*
    Given positive integer n
    On evens: n / 2
    On odds: 3n + 1
  */
  long long n;
  cin >> n;
  while(n != 1) {
    cout << n << " ";
    if(n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  }
  cout << "1" << endl;
}