#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
  string s;
  cin >> s;

  int odds = 0;
  vector<int> count (26, 0);

  for(unsigned int i = 0; i < s.size(); i++) {
    count[s[i] - 'A']++;

    // Dynamically track number of odds
    if(count[s[i] - 'A'] % 2 == 1) {
      odds++;
    } else {
      odds--;
    }
  }

  if (odds > 1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  // Create possible solution
  string out = "";
  for(unsigned int i = 0; i < count.size(); i++) {
    if (count[i] % 2 == 1) {
      out.assign(count[i], 'A' + i);
    }
  }
  
  for(unsigned int i = 0; i < count.size(); i++) {
    if (count[i] % 2 == 0) {
      out.append(count[i] / 2, 'A' + i);
      out.insert(0, count[i] / 2, 'A' + i);
    }
  }
  
  cout << out << endl;
}