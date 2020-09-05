// 2.4 型推論
// 2.4.2 範囲for 文の型推論

#include <iostream>

int main()
{
  int array[] = {0, 1, 2, 3, 4};
  for (auto e : array)
  {
    std::cout << e << std::endl;
  }
}
