#include <iostream>
#include <string>
using namespace std;

void generate(unsigned int totalBits, string& currCode);

int main() {
  unsigned int n;
  cin >> n;

  string code = "";
  generate(n, code);
}

void generate(unsigned int totalBits, string& currCode) {
  if (currCode.size() == totalBits) {
    cout << currCode << endl;
    return;
  }
  for(int i = 0; i <= 1; i++) {
    currCode += to_string(i);
    generate(totalBits, currCode);
    currCode.pop_back();
  }
}