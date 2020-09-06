// 2.8 ラムダ式
// 2.8.3 変数のコピーキャプチャ

#include <iostream>

int main()
{
  int a = 0;
  auto lambda = [a]()
  {
    std::cout << a << std::endl;
  };
  lambda();

  a = 42;
  lambda();
}
