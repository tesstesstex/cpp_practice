// 2.4 型推論
// 2.4.1 変数の方と初期値の型

#include <iostream>
#include <typeinfo>

int one()
{
  return 1;
}

int main()
{
  auto d = 3.14;
  d = 2.71f;
  std::cout << typeid(d).name() << std::endl;
  std::cout << d << std::endl;

  auto i = one();
  i = 42.195;
  std::cout << typeid(i).name() << std::endl;
  std::cout << i << std::endl;
}
