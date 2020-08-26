#include <iostream>

void show_value(float f)
{
  std::cout << f << std::endl;
}

int main()
{
  // 1.7.3 繰り返し do
  // while, for と逆で、実行=>条件式 の順
  int value[] = {-20, 10, 5, -40, 0, 10, -30};
  int i = 0;
  do
  {
    if (value[i] < 0)
    {
       std::cout << "continue" << std::endl;
       ++i;
       continue;
    }
    if (value[i] == 0)
    {
      std::cout << "break" << std::endl;
      break;
    }
    std::cout << "elem = " << value[i] << std::endl;
    ++i;
  }while(i < 7);
  std::cout << "loop finished." << std::endl;
}
