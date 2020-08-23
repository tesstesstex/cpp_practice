#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  int array[10] = {};

  std::cout << "sizeof(array): " << sizeof(array) << std::endl;
  // 配列の要素を使えば型が変わっていても問題ない
  std::size_t length = sizeof(array) / sizeof(array[0]);

  std::cout << "array[" << length << "]" << std::endl;
}
