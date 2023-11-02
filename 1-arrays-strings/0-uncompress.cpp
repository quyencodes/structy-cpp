#include <iostream>
#include <limits>
#include <string>

std::string uncompress(std::string s) {
  std::string result = "", numbers = "0123456789";
  int i = 0, j = 0;

  while (j < s.length()) {
    if (numbers.find(s[j]) != std::string::npos) {
      j += 1;
    } else {
      int count = std::stoi(s.substr(i, j-i));
      // for (int n = 0; n < count; n++) {
      //   result += s[j];
      // }
      result += std::string(count, s[j]);
      i = j + 1;
      j = i;
    }
  }
  return result;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}