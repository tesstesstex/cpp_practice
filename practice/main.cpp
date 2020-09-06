// 2.6 コンソールからの入力
// 2.6.1 std::cin
#include <iostream>

int main()
{
  int i;
  std::cout << "Please input number.> ";
  std::cin >> i;
  std::cout << "You inputed \"" << i << "\"." << std::endl;
}
