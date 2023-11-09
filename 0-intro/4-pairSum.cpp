#include <array>
#include <vector>
#include <unordered_map>

std::array<int, 2> pairSum(std::vector<int> numbers, int target) {
  std::unordered_map<int, int> previousNums = {};

  for (int i = 0; i < numbers.size(); i++) {
    int complement = target - numbers[i];
    if (previousNums.find(complement) != previousNums.end()) {
      return std::array {i, previousNums[complement]};
    }
    previousNums[numbers[i]] = i;
  }
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}