#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> seen(n, 0);
  
  int currNum;
  for (int i = 0; i < n-1; i++) {
    cin >> currNum;
    seen[currNum-1] = 1;
  }

  for (int i = 0; i < n; i++) {
    if(seen[i] == 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return -1;
}
