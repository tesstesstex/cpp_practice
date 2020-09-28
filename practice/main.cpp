// 3 クラス
// 3.3 初期値を受け取るコンストラクター
// 3.3.4 = を使った初期化

#include <iostream>
#include <string>

class A
{
  int m_v;

  public:
    A(int);
    int v() const;
};

A::A(int v) : m_v(v)
{

}

int A::v() const
{
  return m_v;
}

int main()
{
  A x = 42; // A::A(int) を呼び出している
  if (x.v() == 42)
  {
    std::cout << "A.v() は42 です" << std::endl;
  }
  else
  {
    std::cout << "A.v() は42 ではない" << std::endl;
  }
}
