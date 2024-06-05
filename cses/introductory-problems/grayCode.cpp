#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generate(unsigned int n, vector<string>& result);

int main() {
  unsigned int n;
  cin >> n;
  vector<string> result (1, "");

  generate(n, result);
  for(unsigned int i = 0; i < result.size(); i++) {
    cout << result[i] << endl;
  }
}

void generate(unsigned int n, vector<string>& result) {
  if (result[0].size() == n) {
    return;
  }

  result.resize(result.size() * 2);
  for(unsigned int i = 0; i < result.size() / 2; i++) {
    result[(result.size()-1) - i] = result[i];
  }

  for(unsigned int i = 0; i < result.size(); i++) {
    if (i < result.size() / 2) {
      result[i].insert(0, "0");
    } else {
      result[i].insert(0, "1");
    }
  }

  generate(n, result);
}