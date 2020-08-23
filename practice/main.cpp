#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  int array[5] = {1, 2, 3};

  std::cout << "array[0] = " << array[0] << std::endl;
  std::cout << "array[1] = " << array[1] << std::endl;
  std::cout << "array[2] = " << array[2] << std::endl;
  std::cout << "array[3] = " << array[3] << std::endl;
  std::cout << "array[4] = " << array[4] << std::endl;
}
