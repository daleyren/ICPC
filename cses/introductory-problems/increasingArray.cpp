#include <iostream>
using namespace std;

int main() {
  int n, prev, curr;
  long long cost = 0;

  cin >> n;
  cin >> prev;
  for(int i = 1; i < n; i++) {
    cin >> curr;
    if(prev > curr) {
      cost += (prev - curr);
    }
    // printf("%d %d -> %llu\n", prev, curr, cost);
    prev = max(prev, curr);
  }

  cout << cost << endl;
}