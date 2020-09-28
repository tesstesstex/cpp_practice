// 3 クラス
// 3.3 初期値を受け取るコンストラクター
// 3.3.5 explicit 指定子

#include <iostream>
#include <string>

class A
{
  int m_v;

  public:
    explicit A(int); // explicit キーワードを追加することで
                     // 暗黙のコンストラクター呼び出しを禁止できる
    int v() const;
};

A::A(int v) : m_v(v) // 定義にはexplicit を書かない
{

}

int A::v() const
{
  return m_v;
}

int main()
{
  /* A x = 42; // エラー。暗黙のコンストラクター呼び出しは禁止されている */
  A y(42); // OK. 明示的なコンストラクター呼び出し
  if (y.v() == 42)
  {
    std::cout << "A.v() は42 です" << std::endl;
  }
  else
  {
    std::cout << "A.v() は42 ではない" << std::endl;
  }
}
