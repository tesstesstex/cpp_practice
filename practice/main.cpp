// 2.5 型の別名定義
// 2.5.1 型に別の名前を与える

#include <iostream>

using integer = int;
integer main()
{
  int value = 42;
  using number = integer;
  number num = 0;
  value = num;
}
