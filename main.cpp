#include <iostream>

consteval int get_value() {
  return 3;
}

int main() {
  auto result = (10 <=> 20) > 0;
  std::cout << result << std::endl;

  int num {100};
  std::cin >> num;

  constexpr int value = get_value();
  std::cout << "value: " << value << std::endl;

  return 0;
}