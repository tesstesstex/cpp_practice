// 2.7 関数オーバーロード
// 2.7.1 引数の数が違うオーバーロード

#include <iostream>

void show_value(int a)
{
  std::cout << a << std::endl;
}

int sum(int a, int b)
{
  int c = a + b;
  return c;
}

int sum(int a, int b, int c)
{
  int d = a + b + c;
  return d;
}

int main()
{
  int x = sum(10, 20);
  show_value(x);

  int y = sum(10, 20, 30);
  show_value(y);
}
