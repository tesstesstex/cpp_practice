// 2.8 ラムダ式
// 2.8.5 参照を取得するキャプチャ

#include <iostream>

int main()
{
  int a = 0;

  auto lambda = [&a]()
  {
    std::cout << a << std::endl;
    ++a;
  };

  lambda();
  // original
  std::cout << a << std::endl;
  a = 42;
  lambda();
}
