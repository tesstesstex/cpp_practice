// 2.3 参照
// 2.3.2 参照とポインターの違い

#include <iostream>

int main()
{
  int value = 42;
  int other = 0;
  int* pointer = &value; // value へのポインター
  int& reference = value; // value への参照

  std::cout << "value's address is " << &value << " and its value is " << value << "." << std::endl;
  std::cout << "other's address is " << &other << " and its value is " << other << "." << std::endl;
  std::cout << "pointer's address is " << pointer << " and its value is " << *pointer << "." << std::endl;
  std::cout << "reference's address is " << &reference << " and its value is " << reference << "." << std::endl;

  pointer = &other; // ポインターが持つアドレスをother のアドレスへ変更
  reference = other; // 参照先をvalue からother へ変えたつもり

  std::cout << std::endl; // 空行
  std::cout << "value's address is " << &value << " and its value is " << value << "." << std::endl;
  std::cout << "other's address is " << &other << " and its value is " << other << "." << std::endl;
  std::cout << "pointer's address is " << pointer << " and its value is " << *pointer << "." << std::endl;
  std::cout << "reference's address is " << &reference << " and its value is " << reference << "." << std::endl;

}
