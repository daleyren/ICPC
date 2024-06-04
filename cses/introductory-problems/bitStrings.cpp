#include <iostream>
using namespace std;

int main() {
  /*
  Number of permutations of length n with 2 possibilities for each character = 2^n
  NOTE: ab (mod c) = [a (mod c) * b (mod c)] mod c
  */
  int n;
  cin >> n;
  
  long long MOD_VALUE = 1e9+7;
  long long combos = 1;
  for(int i = 0; i < n; i++) {
    combos = ((combos % MOD_VALUE) * 2) % MOD_VALUE;
  }

  cout << combos << endl;
}