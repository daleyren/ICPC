#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long totalCombinations;
  long long invalidCombinations;
  for(long long i = 1; i <= n; i++) {
    totalCombinations = ((i * i) * ((i * i) - 1)) / 2;
    invalidCombinations = 4 * (i - 1) * (i - 2);
    cout << totalCombinations - invalidCombinations << endl;
  }
}