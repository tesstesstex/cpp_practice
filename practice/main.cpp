#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  // 1.7.1 繰り返し while
  int i = 0;
  while (i < 5)
  {
    std::cout << "Hello, world" << std::endl;
    i += 1;
  }

  int value[] = {-20, 10, 5, -40, 0, 10, -30};
  int j = 0;
  while (j < 7)
  {
    if (value[j] < 0)
    {
      std::cout << "continue" << std::endl;
      ++j;
      continue;
    }
    if (value[j] == 0)
    {
      std::cout << "break" << std::endl;
      break;
    }
    std::cout << "elem = " << value[j] << std::endl;
    ++j;
  }
  std::cout << "loop finished." << std::endl;
}
