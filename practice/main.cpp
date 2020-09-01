// 2.3 参照
// 2.3.1 変数の別名

#include <iostream>

int main()
{
  int value = 42;

  std::cout << "valuable value's address is " << &value << " and its value is " << value << "." << std::endl;

  int& reference = value;

  std::cout << "valuable reference's address is " << &reference << " and its value is " << reference << "." << std::endl;

  reference = 0;

  std::cout << "valuable value's address is " << &value << " and its value is " << value << "." << std::endl;
}
