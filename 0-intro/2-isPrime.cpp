#include <iostream>

bool isPrime(int n) {
  if (n == 1) return false;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
  std::cout << isPrime(2) << std::endl; // 1
  std::cout << isPrime(3) << std::endl; // 1
  std::cout << isPrime(4) << std::endl; // 0
  std::cout << isPrime(5) << std::endl; // 1
}