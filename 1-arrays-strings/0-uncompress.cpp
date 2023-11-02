#include <iostream>
#include <string>

std::string uncompress(std::string s) {
  std::string res = "";
  std::string nums = "0123456789";
  int i = 0;
  int j = 0;
  while (j < s.length()) {
    if (nums.find(s[j]) != std::string::npos) {
      j += 1;
    } else {
      int num = std::stoi(s.substr(i, j - i));
      res += std::string(num, s[j]);
      i = j + 1;
      j = i;
    }
  }

  return res;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it

}