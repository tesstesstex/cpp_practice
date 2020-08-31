#include <iostream>

struct S
{
  int a;
  int b;
  int c;
};

union U
{
  int d;
  int e;
  int f;
};

int main()
{
  S s;

  std::cout << "Struct---" << std::endl;
  std::cout << "the address of s.a is " << &s.a << std::endl;
  std::cout << "the address of s.b is " << &s.b << std::endl;
  std::cout << "the address of s.c is " << &s.c << std::endl;

  U u = { 42 }; // 初期化は先頭メンバーのみ

  std::cout << "Union---" << std::endl;
  std::cout << "the address of u.d is " << &u.d << std::endl;
  std::cout << "the address of u.e is " << &u.e << std::endl;
  std::cout << "the address of u.f is " << &u.f << std::endl;

  std::cout << "the value of u.d is " << u.d << std::endl;
  std::cout << "the value of u.e is " << u.e << std::endl;
  std::cout << "the value of u.f is " << u.f << std::endl;

  u.f = 1024;

  std::cout << "the value of u.d is " << u.d << std::endl;
  std::cout << "the value of u.e is " << u.e << std::endl;
  std::cout << "the value of u.f is " << u.f << std::endl;
}
