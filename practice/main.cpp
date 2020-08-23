#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  int array[10] = {};

  std::cout << "sizeof(array): " << sizeof(array) << std::endl;
  // 配列のサイズを要素の方で割ると配列の長さがわかる
  std::size_t length = sizeof(array) / sizeof(int);

  std::cout << "array[" << length << "]" << std::endl;
}
