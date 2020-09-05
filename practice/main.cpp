// 2.4 型推論
// 2.4.3 式の型を推論する

#include <iostream>

// 値1 の型を推論し、その方を戻り値の型として使う
decltype(1) one()
{
  return 1;
}

int main()
{
  auto i = one();
  decltype(i) j;

  j = 42.195;
  std::cout << j << std::endl;
}
