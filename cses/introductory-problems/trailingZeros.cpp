#include <iostream>
using namespace std;

int main() {
  /*
  Number of zeros in n! is the number of 5 * 2 pairs within n!
  x = # of 5's
  y = # of 2's
  */

  long long n;
  long long x = 0;
  // long long y = 0;

  cin >> n;
  while (n != 0) {
    x += n / 5;
    n /= 5;
  }

  // DON'T REALLY NEED THIS BECAUSE THERE WILL ALWAYS BE MORE TWOS -> NUMBER OF FIVES IS THE LIMITING VARIABLE
  // m = n;
  // while (m != 0) {
  //   y += m / 2;
  //   m /= 2;
  // }

  // cout << x << " " << y << endl;

  cout << x << endl;
}