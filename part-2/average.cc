// Sebastian Alvarez
// S.Alvarez069@csu.fullerton.edu
// @SebastianAlvarez0609
// Partners: @AnthonyJ1321

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double total{0.0};
  bool first{true};
  for (std::string& arg : arguments) {
    if (first) {
      (first) = false;
    } else {
      double number{std::stod(arg)};
      total += number;
    }
  }

  double average{0};
  average = (total / (static_cast<int>(arguments.size()) - 1));
  std::cout << "average = " << average;
  return 0;
}
