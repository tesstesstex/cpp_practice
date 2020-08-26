#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  // 1.7.2 繰り返し for
  int value[] = {-20, 10, 5, -40, 0, 10, -30};
  for (int i = 0; i < 7; ++i)
  {
    if (value[i] < 0)
    {
      std::cout << "continue" << std::endl;
      continue;
    }
    if (value[i] == 0)
    {
      std::cout << "break" << std::endl;
      break;
    }
    std::cout << "elem = " << value[i] << std::endl;
  }
  std::cout << "loop finished!" << std::endl;

  // 範囲for
  int rValue[] = {-20, 10, 5, -40, 0, 10, -30};
  for (int elem : rValue)
  {
    if (elem < 0)
    {
      std::cout << "continue" << std::endl;
      continue;
    }
    if (elem == 0)
    {
      std::cout << "break" << std::endl;
      break;
    }
    std::cout << "elem = " << elem << std::endl;
  }
  std::cout << "loop finished!" << std::endl;
}
