#include <string>
#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  // std::string という型を使うと配列でなくても文字列を使える
  std::string hello = "Hello";
  std::cout << hello;
  hello = ", string"; // より長い文字を代入できる
  std::cout << hello << std::endl;
}
