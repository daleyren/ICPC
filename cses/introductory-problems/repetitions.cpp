#include <iostream>
#include <string>
using namespace std;

int main() {
  string in;
  cin >> in;
  
  int n = in.size();
  int longestSequence = 0;
  int currSequence = 1;

  for (int i = 1; i < n; i++){
    if(in[i - 1] == in[i]) {
      currSequence++;
    } else {
      longestSequence = max(longestSequence, currSequence);
      currSequence = 1;
    }
  }
  longestSequence = max(longestSequence, currSequence);

  cout << longestSequence << endl;
}