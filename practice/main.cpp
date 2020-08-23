#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  char hello[] = "Hello"; // 文字列リテラルで初期化

  char array[6] = {'a', 'r', 'r'}; // 文字リテラルの配列として初期化
  array[3] = 'a';
  array[4] = 'y';
  array[5] = '\0'; // ヌル文字

  std::cout << hello << ", " << array << std::endl;
}
