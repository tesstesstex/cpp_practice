// 2.8 ラムダ式
// 2.8.4 変更可能なコピーキャプチャ

#include <iostream>

int main()
{
  int a = 0;

  auto lambda = [a]() mutable
  {
    a = 42;
    std::cout << a << std::endl;
  };

  lambda();
  std::cout << a << std::endl;
}
