#include <signal.h>
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <thread>

volatile sig_atomic_t flag = 0;

void handle_interrupt(int sig) {  // can be called asynchronously
  flag = 1;
}

bool is_palindrome(const std::string& s) {
  int n = s.length();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1]) {
      return false;
    }
  }
  return true;
}

void generate_palindromes(const std::string& path, unsigned long long n = 100) {
  std::ofstream file;
  file.open(path, std::ios::app);
  if (!file.is_open()) {
    std::cerr << "Unable to open file" << std::endl;
    return;
  }

  for (unsigned long long i = 1; i < n; ++i) {
    if (flag) {
      throw std::runtime_error("Interrupted by user");
    }
    if (is_palindrome(std::to_string(i))) {
      file << i << std::endl;
    }
    // Simulating tqdm's progress update.
    if (i % 10000 == 0) {
      std::cout << "Processed up to number: " << i << std::endl;
      std::this_thread::sleep_for(
          std::chrono::milliseconds(10));  // to reduce console output rate
    }
  }

  file.close();
}

int main() {
  signal(SIGINT, handle_interrupt);
  std::string path = "nums.txt";
  generate_palindromes(path);
  return 0;
}

// 71967 palindrones found 30 Jan 11:19
// 664030000
