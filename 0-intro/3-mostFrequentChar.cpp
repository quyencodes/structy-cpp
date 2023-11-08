#include <iostream>
#include <string>
#include <unordered_map>

char mostFrequentChar(std::string s) {
  std::unordered_map<char, int> counter = {};

  for (char c: s) {
    counter[c] += 1;
  }

  char best = '\0';
  for (int i = 0; i < s.length(); i ++) {
    if (best == '\0' || counter[s[i]] > counter[best]) {
      best = s[i];
    }
  }
  return best;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::unordered_map<char, int> temp = {};
  std::cout << temp['\0'];

}