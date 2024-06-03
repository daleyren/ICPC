#include <iostream>
// #include <cmath>
using namespace std;
 
int main() {
  int t;
  long long x, y;
  cin >> t;
  long long out;
  long long base;
 
  for(int i = 0; i < t; i++)  {
    cin >> y;
    cin >> x;
    base = max(x, y);
    out = base * base - (base - 1);
    if (base % 2 == 1){
      if (x > y) {
        out += (x - y);
      } else {
        out -= (y - x);
      }
    } else {
      if (x < y) {
        out += (y - x);
      } else {
        out -= (x - y);
      }
    }
    
    cout << out << endl;
  }
}
