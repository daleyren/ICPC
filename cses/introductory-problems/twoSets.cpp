#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n;
  cin >> n;
  
  if (
    (n % 2 == 1 && n/2 % 2 == 0) ||
    (n % 2 == 0 && n/2 % 2 == 1) 
  ) {
    cout << "NO" << endl;
    return 0;
  } 

  long long target = (n * (n+1)) / 4;
  vector<int> used(n, 0);
  int usedCount = 0;
  // cout << target;

  long long currSum = 0;
  for(int i = n; i > 0; --i) {
    if (i + currSum > target) {
      continue;
    }
    currSum += i;
    used[i-1] = 1;
    usedCount += 1;
  }
  
  cout << "YES" << endl;

  // FIRST BOX
  cout << usedCount << endl;
  for(int i = 0; i < n; ++i) {
    if (used[i] == 1) {
      cout << i + 1 << ' ';
    }
  }
  cout << endl;

  // SECOND BOX 
  cout << n - usedCount << endl;
  for(int i = 0; i < n; ++i) {
    if (used[i] == 0) {
      cout << i + 1 << ' ';
    }
  }
  cout << endl;
}