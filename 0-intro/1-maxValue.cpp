#include <vector>
#include <iostream>
#include <limits>

float maxValue(std::vector<float> numbers) {
  float max = std::numeric_limits<float>::infinity() * -1;
  for (auto num: numbers) {
    if (num > max) max = num;
  }
  return max;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}